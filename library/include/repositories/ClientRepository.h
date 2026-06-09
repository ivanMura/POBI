//
// Created by kacpe on 4.06.2026.
//

#ifndef UNTITLED5_CLIENTREPOSITORY_H
#define UNTITLED5_CLIENTREPOSITORY_H
#include <memory>
#include <vector>

#include "../model/Client.h"


class ClientRepository
{
public:
    ClientRepository();
    ~ClientRepository();
    /**
     * @brief Dodaje nowego klienta do repozytorium.
     * @param client Wskaźnik na klienta, który ma zostać zapisany.
     * @return true Jeśli dodawanie zakończeń się sukcesem.
     * @return false Jeśli klient o takim ID już istnieje.
     */
    bool add(std::shared_ptr<Client> client);
    /**
     * @brief Usuwa klienta z repozytorium.
     * @param client Wskaźnik na klienta do usunięcia.
     * @return true Jeśli klient został znaleziony i pomyślnie usunięty.
     * @return false Jeśli klienta nie było w repozytorium.
     */
    bool remove(std::shared_ptr<Client> client);
    /**
    * @brief Pobiera listę wszystkich klientów znajdujących się w bazie.
    * @return std::vector<std::shared_ptr<Client>> Wektor zawierający wszystkich klientów.
    */
    std::vector<std::shared_ptr<Client>> getAll();
    /**
     * @brief Metoda przypisująca pojazd do konkretnego klienta w bazie.
     * @param clientId Identyfikator klienta, do którego przypisujemy pojazd.
     * @param vehicle Wskaźnik na pojazd.
     */
    std::shared_ptr<Client> findClientById(int id);
    void addVehicleToClient(int clientId, std::shared_ptr<Vehicle> vehicle);

private:
    std::vector<std::shared_ptr<Client>> clients;
};


#endif //UNTITLED5_CLIENTREPOSITORY_H
