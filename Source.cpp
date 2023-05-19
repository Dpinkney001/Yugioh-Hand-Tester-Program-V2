// Yugioh hand tester program for testing hands and combination of hands.
// using fisher-gates algorithim
// author Duvall Pinkney
// version two create date 5/19/2023

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <algorithm>

enum class Card {
    Dark_Ruler_Ha_Des, Monster_Reborn, Lightning_Vortex, Solemn_Judgement,
    Enemy_Controller, Contract_With_The_Dark_Master, Brain_Control, Monster_Reincarnation, Goblin_Zombie,
    Berserk_Dragon, A_Deal_With_Dark_Ruler, Newdoria, Opticlops, Deck_Devastation_Virus, Brain_Jacker,
    Ectoplasmer, Double_Spell, Newdoria, Jowgen_The_Spiritualist, Return_From_The_Different_Dimension,
    Card_Destruction, Mystical_Space_Typhoon, Headless_Knight, Archfiend_Soldier, My_Body_As_A_Shield,
    Megamorph, Mask_Of_Darkness, Despair_From_The_Dark, Mystic_Plasma_Zone, Dark_Master_Zorc,
    Dark_Necrofear, Possessed_Dark_Soul, Necroface, Sangan, Mirror_Force, Gernia, Shrink, Zoma_The_Spirit,
    Zoma_The_Spirit_2copy, Sakuretsu_Armor, Heavy_Storm, Malice_Doll_Of_Demise
};

void shuffleEnum(Card arr[], int size) {
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    for (int i = size - 1; i > 0; --i) {
        int j = std::rand() % (i + 1);
        std::swap(arr[i], arr[j]);
    }
}

int main() {
    Card cards[] = { Card::Dark_Ruler_Ha_Des, Card::Monster_Reborn, Card::Lightning_Vortex, Card::Solemn_Judgement, Card::Enemy_Controller,
    Card::Contract_With_The_Dark_Master, Card::Brain_Control, Card::Monster_Reincarnation, Card::Goblin_Zombie,
    Card::Berserk_Dragon, Card::A_Deal_With_Dark_Ruler, Card::Newdoria, Card::Opticlops, Card::Deck_Devastation_Virus, Card::Brain_Jacker,
    Card::Ectoplasmer, Card::Double_Spell, Card::Newdoria, Card::Jowgen_The_Spiritualist, Card::Return_From_The_Different_Dimension,
    Card::Card_Destruction, Card::Mystical_Space_Typhoon, Card::Headless_Knight, Card::Archfiend_Soldier, Card::My_Body_As_A_Shield,
    Card::Megamorph, Card::Mask_Of_Darkness, Card::Despair_From_The_Dark, Card::Mystic_Plasma_Zone, Card::Dark_Master_Zorc,
    Card::Dark_Necrofear, Card::Possessed_Dark_Soul, Card::Necroface, Card::Sangan, Card::Mirror_Force, Card::Gernia, Card::Shrink, Card::Zoma_The_Spirit,
    Card::Zoma_The_Spirit_2copy, Card::Sakuretsu_Armor, Card::Heavy_Storm, Card::Malice_Doll_Of_Demise };


    int size = sizeof(cards) / sizeof(cards[0]);

    shuffleEnum(cards, size);

    for (int i = 0; i < size; ++i) {
        switch (cards[i]) {
        case Card::Dark_Ruler_Ha_Des:
            std::cout << "Apple" << std::endl;
            break;
        case Card::Monster_Reborn:
            std::cout << "Apple" << std::endl;
            break;
        case Card::Lightning_Vortex:
            std::cout << "Apple" << std::endl;
            break;
        case Card::Solemn_Judgement:
            std::cout << "Apple" << std::endl;
            break;
        case Card::Enemy_Controller:
            std::cout << "Apple" << std::endl;
            break;
        case Card::Contract_With_The_Dark_Master:
            std::cout << "Apple" << std::endl;
            break;
        case Card::Brain_Control:
            std::cout << "Apple" << std::endl;
            break;
        case Card::Monster_Reincarnation:
            std::cout << "Apple" << std::endl;
            break;
        case Card::Goblin_Zombie:
            std::cout << "Apple" << std::endl;
            break;
        case Card::Berserk_Dragon:
            std::cout << "Apple" << std::endl;
            break;
        case Card::A_Deal_With_Dark_Ruler:
            std::cout << "Apple" << std::endl;
            break;
        case Card::Newdoria:
            std::cout << "Apple" << std::endl;
            break;
        case Card::Opticlops:
            std::cout << "Apple" << std::endl;
            break;
        case Card::Deck_Devastation_Virus:
            std::cout << "Apple" << std::endl;
            break;
        case Card::Brain_Jacker:
            std::cout << "Apple" << std::endl;
            break;
        case Card::Ectoplasmer:
            std::cout << "Apple" << std::endl;
            break;
        case Card::Double_Spell:
            std::cout << "Apple" << std::endl;
            break;
        case Card::Newdoria:
            std::cout << "Apple" << std::endl;
            break;
        case Card::Jowgen_The_Spiritualist:
            std::cout << "" << std::endl;
            break;
        case Card::Return_From_The_Different_Dimension:
            std::cout << "" << std::endl;
            break;
        case Card::Card_Destruction:
            std::cout << "" << std::endl;
            break;
        case Card::Mystical_Space_Typhoon, Card::Headless_Knight, Card::Archfiend_Soldier, Card::My_Body_As_A_Shield,
                Card::Megamorph, Card::Mask_Of_Darkness, Card::Despair_From_The_Dark, Card::Mystic_Plasma_Zone, Card::Dark_Master_Zorc,
                Card::Dark_Necrofear, Card::Possessed_Dark_Soul, Card::Necroface, Card::Sangan, Card::Mirror_Force, Card::Gernia, Card::Shrink, Card::Zoma_The_Spirit,
                Card::Zoma_The_Spirit_2copy, Card::Sakuretsu_Armor, Card::Heavy_Storm, Card::Malice_Doll_Of_Demise
    }

    return 0;
}
