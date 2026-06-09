//
// Created by Ivan Muratov on 8/6/26.
//

#ifndef UNTITLED5_STATUSTYPE_H
#define UNTITLED5_STATUSTYPE_H

enum StatusType {
    NEW,        /**< Nowe zlecenie, jeszcze nieobsługiwane. */
    PROCESSING, /**< Zlecenie w trakcie realizacji / naprawy. */
    COMPLITED   /**< Zlecenie zakończone. */
};
#endif //UNTITLED5_STATUSTYPE_H
