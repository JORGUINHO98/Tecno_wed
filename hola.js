document.addEventListener("DOMContentLoaded", () => {
    const buttons = document.querySelectorAll(".nav-button");
    const aboutSection = document.getElementById("seccion-sobre-mi");
    const moviesSection = document.getElementById("seccion-peliculas");

    if (!aboutSection || !moviesSection || buttons.length === 0) return;

    buttons.forEach((button) => {
        button.addEventListener("click", () => {
            const target = button.getAttribute("data-section");

            if (target === "sobre-mi") {
                aboutSection.classList.remove("oculta");
                moviesSection.classList.add("oculta");
            } else if (target === "peliculas") {
                aboutSection.classList.add("oculta");
                moviesSection.classList.remove("oculta");
            }

            buttons.forEach((btn) => btn.classList.remove("nav-button--active"));
            button.classList.add("nav-button--active");
        });
    });

    console.log("=== Página personal WED-HOLAMUN cargada ===");
    console.log("Fecha:", new Date().toLocaleDateString("es-ES"));
});
