// Our application menu has 3 items.  You can add more items if you want.
typedef enum {
    BlackhatSubmenuIndexConfigure,
    BlackhatSubmenuIndexGame,
    BlackhatSubmenuIndexAbout,
} BlackhatSubmenuIndex;

// Each view is a screen we show the user.
typedef enum {
    BlackhatViewSubmenu, // The menu when the app starts
    BlackhatViewTextInput, // Input for configuring text settings
    BlackhatViewConfigure, // The configuration screen
    BlackhatViewGame, // The main screen
    BlackhatViewAbout, // The about screen with directions, link to social channel, etc.
} BlackhatView;

typedef enum {
    BlackhatEventIdRedrawScreen = 0, // Custom event to redraw the screen
    BlackhatEventIdOkPressed = 42, // Custom event to process OK button getting pressed down
} BlackhatEventId;

enum {
	SSID,
	PASS,
	H_SSID,
	SETTING_LEN,
};

typedef struct {
    ViewDispatcher* view_dispatcher; // Switches between our views
    NotificationApp* notifications; // Used for controlling the backlight
    Submenu* submenu; // The application menu
    TextInput* text_input; // The text input screen
    VariableItemList* variable_item_list_config; // The configuration screen
    View* view_game; // The main screen
    Widget* widget_about; // The about screen

    VariableItem* setting_item[SETTING_LEN]; 

    char* temp_buffer; // Temporary buffer for text input
    uint32_t temp_buffer_size; // Size of temporary buffer

    FuriTimer* timer; // Timer for redrawing the screen
	size_t index;
} BlackhatApp;


typedef struct {
    uint32_t setting_1_index; // The team color setting index
    FuriString* setting[SETTING_LEN]; // The name setting
    uint8_t x; // The x coordinate
} BlackhatModel;
