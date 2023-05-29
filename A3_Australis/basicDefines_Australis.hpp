/*Reload Times/Rates of Fire*/
#define RPM_1050 0.057142857

/*Hidden Class Macro*/
#define HIDDEN_CLASS(old,new) \
    class old: new \
    { \
        scope = 1; \
        scopeCurator = 0; \
    }