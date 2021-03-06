//-----------------------------------------------------------------------------
// <auto-generated>
//   This code was generated by a tool.
//
//   Changes to this file may cause incorrect behavior and will be lost if
//   the code is regenerated.
//
//   For more information, see: http://go.microsoft.com/fwlink/?LinkID=623246
// </auto-generated>
//-----------------------------------------------------------------------------
#pragma once

namespace org { namespace OpenT2T { namespace Sample { namespace SuperPopular { namespace Shades {

ref class ShadesSignals;

public interface class IShadesSignals
{
    event Windows::Foundation::TypedEventHandler<ShadesSignals^, ShadesErrorReceivedEventArgs^>^ ErrorReceived;
};

public ref class ShadesSignals sealed : [Windows::Foundation::Metadata::Default] IShadesSignals
{
public:
    // Calling this method will send the error signal to every member of the session.
    void Error(_In_ Platform::String^ interfaceMemberType, _In_ Platform::String^ interfaceMemberMessage);

    // This event fires whenever the error signal is sent by another member of the session.
    virtual event Windows::Foundation::TypedEventHandler<ShadesSignals^, ShadesErrorReceivedEventArgs^>^ ErrorReceived 
    { 
        Windows::Foundation::EventRegistrationToken add(Windows::Foundation::TypedEventHandler<ShadesSignals^, ShadesErrorReceivedEventArgs^>^ handler) 
        { 
            return _ErrorReceived += ref new Windows::Foundation::EventHandler<Platform::Object^>
            ([handler](Platform::Object^ sender, Platform::Object^ args)
            {
                handler->Invoke(safe_cast<ShadesSignals^>(sender), safe_cast<ShadesErrorReceivedEventArgs^>(args));
            }, Platform::CallbackContext::Same);
        } 
        void remove(Windows::Foundation::EventRegistrationToken token) 
        { 
            _ErrorReceived -= token; 
        } 
    internal: 
        void raise(ShadesSignals^ sender, ShadesErrorReceivedEventArgs^ args) 
        { 
            _ErrorReceived(sender, args);
        } 
    }

internal:
    void Initialize(_In_ alljoyn_busobject busObject, _In_ alljoyn_sessionid sessionId);
    void CallErrorReceived(_In_ ShadesSignals^ sender, _In_ ShadesErrorReceivedEventArgs^ args);

private:
    alljoyn_busobject m_busObject;
    alljoyn_sessionid m_sessionId;

    virtual event Windows::Foundation::EventHandler<Platform::Object^>^ _ErrorReceived;

    alljoyn_interfacedescription_member m_memberError;
};

} } } } } 
