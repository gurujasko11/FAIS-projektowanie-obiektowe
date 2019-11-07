#ifndef ORGANEL_H
#define ORGANEL_H
enum OrganelType{
    NONE_TYPE = 0,
    WALL,
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
