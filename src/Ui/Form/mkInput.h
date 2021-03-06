//  Copyright (c) 2015 Hugo Amiard hugo.amiard@laposte.net
//  This software is provided 'as-is' under the zlib License, see the LICENSE.txt file.
//  This notice and the license may not be removed or altered from any source distribution.

#ifndef MK_INPUT_H_INCLUDED
#define MK_INPUT_H_INCLUDED

/* mk headers */
#include <Object/mkTyped.h>
#include <Object/mkRef.h>
#include <Ui/mkUiForward.h>
#include <Ui/Widget/mkValue.h>
#include <Ui/Widget/mkSlider.h>

#include <Object/Util/mkStat.h>
#include <Object/Util/mkDispatch.h>

/* Standard */
#include <functional>

namespace mk
{
	class MK_UI_EXPORT InputInt : public Sequence
	{
	public:
		InputInt(const string& label, int value, std::function<void(int)> callback = nullptr);

		static StyleType& cls() { static StyleType ty("InputInt", Sequence::cls()); return ty; }
	};

	class MK_UI_EXPORT InputFloat : public Sequence
	{
	public:
		InputFloat(const string& label, float value, std::function<void(float)> callback = nullptr);

		static StyleType& cls() { static StyleType ty("InputFloat", Sequence::cls()); return ty; }
	};

	class MK_UI_EXPORT InputBool : public Sequence
	{
	public:
		InputBool(const string& label, bool value, std::function<void(bool)> callback = nullptr);

		static StyleType& cls() { static StyleType ty("InputBool", Sequence::cls()); return ty; }
	};

	class MK_UI_EXPORT InputText : public Sequence
	{
	public:
		InputText(const string& label, const string& text, std::function<void(string)> callback = nullptr, bool reverse = false);

		static StyleType& cls() { static StyleType ty("InputText", Sequence::cls()); return ty; }
	};

	class MK_UI_EXPORT InputDropdown : public Sequence
	{
	public:
		InputDropdown(const string& label, StringVector choices, std::function<void(const string&)> callback = nullptr, bool textinput = false, bool reverse = false);

		static StyleType& cls() { static StyleType ty("InputDropdown", Sequence::cls()); return ty; }
	};
	
	class MK_UI_EXPORT SliderInt : public Sequence
	{
	public:
		SliderInt(const string& label, AutoStat<int> value, std::function<void(int)> callback = nullptr);

		static StyleType& cls() { static StyleType ty("SliderInt", Sequence::cls()); return ty; }
	};

	class MK_UI_EXPORT SliderFloat : public Sequence
	{
	public:
		SliderFloat(const string& label, AutoStat<float> value, std::function<void(float)> callback = nullptr);

		static StyleType& cls() { static StyleType ty("SliderFloat", Sequence::cls()); return ty; }
	};
}

#endif // MK_INPUT_H_INCLUDED
