#ifndef ORGANEL_H
#define ORGANEL_H
enum OrganelType{
    WALL = 0,
    MEMBRANE,
    NUCLEUS,
    NUCLEUS_MEMBRANE,
    CYTOPLASM,
    ENDOPLASMIC_RETICULUM,
    RIBOSOMES,
    MITOCHONDRION,
    VACUOLES,
    LYSOSOMES,
    CHLOROPLASTS
};
class Organel {
public:
    Organel(OrganelType type_);
    void print();
    const OrganelType type;
};

#endif //ORGANEL_H
