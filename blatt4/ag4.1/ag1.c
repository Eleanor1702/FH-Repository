#include <stdio.h>
#include <gtk/gtk.h>

void on_dst(GtkWidget* src, gpointer data) {
    gtk_main_quit();
}

void on_click(GtkWidget* src, gpointer data) {
    printf("Hallo Benutzer\n");
}

int main(int argc, char* argv[]) {
    gtk_init(&argc, &argv);

        GtkWidget* window;
        window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
        gtk_window_set_title(GTK_WINDOW(window), "Aufgabe 1");
        gtk_window_set_default_size(GTK_WINDOW(window), 200, 200);
        
        GtkWidget* button;
        button = gtk_button_new_with_label("Sag Hallo");
        gtk_container_add(GTK_CONTAINER(window), button);

        g_signal_connect(window, "destroy", G_CALLBACK(on_dst), NULL);
        g_signal_connect(button, "clicked", G_CALLBACK(on_click), NULL);

        gtk_widget_show(button);
        gtk_widget_show(window);

    gtk_main();
    return 0;
}
