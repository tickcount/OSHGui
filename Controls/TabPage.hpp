#ifndef OSHGUI_TABPAGE_HPP_
#define OSHGUI_TABPAGE_HPP_

#include "Panel.hpp"

namespace OSHGui
{
	class TabControl;

	/**
	 * Wird zum Gruppieren von Auflistungen von Steuerelementen verwendet.
	 */
	class OSHGUI_EXPORT TabPage : public Panel
	{
	public:
		/**
		 * Konstruktor der Klasse.
		 *
		 * @param parent das Elternsteuerelement
		 */
		TabPage(TabControl *parent);
		
		/**
		 * Legt den Text fest.
		 *
		 * @param text
		 */
		void SetText(const Misc::UnicodeString &text);
		/**
		 * Ruft den Text ab.
		 *
		 * @return der Text
		 */
		const Misc::UnicodeString& GetText() const;
		
		/**
		 * Veranlasst das Steuerelemt seine interne Struktur neu zu berechnen.
		 * Wird au�erdem f�r alle Kindelemente aufgerufen.
		 *
		 * Sollte nicht vom Benutzer aufgerufen werden!
		 */
		virtual void Invalidate();

		/**
		 * Verarbeitet ein Event und gibt es wenn n�tig an Kindelemente weiter.
		 *
		 * @param event
		 * @return NextEventTypes
		 */
		virtual bool ProcessEvent(IEvent *event);
		/**
		 * Zeichnet das Steuerelement mithilfe des �bergebenen IRenderers.
		 *
		 * @param renderer
		 */
		virtual void Render(Drawing::IRenderer *renderer);

	protected:
		
		Misc::UnicodeString text;
	};
}

#endif