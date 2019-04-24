//
// Created by railgunpat on 16.04.19.
//

#ifndef PRINTER_FARM_SLAVE_MYPBUTILS_H
#define PRINTER_FARM_SLAVE_MYPBUTILS_H

#include <string>
#include <common/utils/types/commonsymbols.h>
#include <pf_msg.pb.h>
#include <common/utils/types/PrinterData.h>
#include <common/utils/types/Job.h>


class PrinterDataPBUtils { // TODO change to templates, or operator class()
public:
    PrinterData printerData;
    pf_msg::PrinterDataMessage printerDataMessage;

    explicit PrinterDataPBUtils(PrinterData printerData) : printerData(printerData) {
        printerDataMessage.set_status(static_cast<pf_msg::PrinterDataMessage_Status>(printerData.printerStatus));
        if (static_cast<PrinterStatus>(printerData.id) != PrinterStatus::NO_ID)
            printerDataMessage.set_printerid(printerData.id);
        pf_msg::PrinterDataMessage_Status printerDataMessageStatus;
    }

    explicit PrinterDataPBUtils(const pf_msg::PrinterDataMessage& printerDataMessage) : printerDataMessage(printerDataMessage) {
        printerData.printerStatus = static_cast<PrinterStatus>(printerDataMessage.status());
        if (printerDataMessage.has_printerid())
            printerData.id = (printerDataMessage.printerid());
    }
};

class JobMessagePBUtils {
public:
    Job job;
    pf_msg::JobMessage jobMessage;

    explicit JobMessagePBUtils(const pf_msg::JobMessage& jobMessage) : jobMessage(jobMessage) {
        job.encodedFile = jobMessage.encodedfile();
        job.path = jobMessage.path();
    }

    explicit JobMessagePBUtils(const Job& job) : job(job) {
        jobMessage.set_path(job.path);
        jobMessage.set_encodedfile(job.encodedFile);

    }
};

#endif //PRINTER_FARM_SLAVE_MYPBUTILS_H
