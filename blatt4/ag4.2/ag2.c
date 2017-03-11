#include <gtk/gtk.h>

typedef struct gui{
    GtkWidget *window;
    GtkWidget *table;
    GtkWidget *label_1;
    GtkWidget *label_2;
    GtkWidget *label_3;
    GtkWidget *entry_1;
    GtkWidget *entry_2;
    GtkWidget *entry_3;
    GtkWidget *button;
}GUI;

void on_destroy(GtkWidget *src, gpointer data) {
    gtk_main_quit();
}

void init_gui(GUI *g) {
    //window
    g->window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_default_size(GTK_WINDOW(g->window), 300, 300);
    //table
    g->table = gtk_table_new(3, 2, TRUE);
    gtk_container_add(GTK_CONTAINER(g->window), g->table);
    //label
    g->label_1 = gtk_label_new("Summand 1");
    gtk_table_attach_defaults(GTK_TABLE(g->table), g->label_1, 0, 1, 0, 1);
    g->label_2 = gtk_label_new("Summand 2");
    gtk_table_attach_defaults(GTK_TABLE(g->table), g->label_2, 0, 1, 1, 2);
    g->label_3 = gtk_label_new("Ergebnis");
    gtk_table_attach_defaults(GTK_TABLE(g->table), g->label_3, 0, 1, 2, 3);
    //entry
    g->entry_1 = gtk_entry_new();
    gtk_table_attach_defaults(GTK_TABLE(g->table), g->entry_1, 1, 2, 0, 1);
    g->entry_2 = gtk_entry_new();
    gtk_table_attach_defaults(GTK_TABLE(g->table), g->entry_2, 1, 2, 1, 2);
    g->entry_3 = gtk_entry_new();
    gtk_table_attach_defaults(GTK_TABLE(g->table), g->entry_3, 1, 2, 2, 3);
    //button
    g->button = gtk_button_new_with_label("Berechnen");
    gtk_table_attach_defaults(GTK_TABLE(g->table), g->button, 0, 1, 3, 4);

    gtk_widget_show_all(g->window);
}

void on_berechnen(GtkWidget *src, GUI *g) {
    
    int s1 = gtk_entry_get_text(g->entry_1);
    int s2 = gtk_entry_get_text(g->entry_2);
    int result = s1 + s2;
    printf("%d\n %d\n %d\n", s1, s2, result);
    /*gtk_entry_set_text(GTK_ENTRY(g->entry_3), result);*/
}

void gui_control(GUI *g) {
    //window
    g_signal_connect(g->window, "destroy", G_CALLBACK(on_destroy), NULL);
    //button
    g_signal_connect(g->button, "clicked", G_CALLBACK(on_berechnen), &g);
}

int main(int argc, char *argv[]) {
    GUI g;
    gtk_init(&argc, &argv);
        init_gui(&g);
        gui_control(&g);
    gtk_main();
    return 0;
}