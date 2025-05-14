```mermaid
classDiagram
    class SSDDevice {
        +int readData(int LBA)
        +void writeData(int LBA, int data)
    }

    class SSDCmdParser {
        +SSDCmdParser(void) = default;
        +bool checkParsing(int argc, const char* argv[])
        -SSDDevice m_device
        <<const>> VALID_COMMAND_SIZE : int = 2
    }


    class Main {
        +int main(int argc, char* argv[])
    }

    SSDCmdParser --> SSDDevice : uses
    Main --> SSDCmdParser : instantiates
