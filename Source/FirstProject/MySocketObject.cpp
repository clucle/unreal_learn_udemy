#include "MySocketObject.h"

void UMySocketObject::SetMessage(FString msg)
{
	this->message = msg;
}

bool UMySocketObject::ConnectToServer()
{
    Socket = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->CreateSocket(NAME_Stream, TEXT("default"), false);

    FString address = TEXT("127.0.0.1");
    int32 port = 12111;

    FIPv4Address ip;
    FIPv4Address::Parse(address, ip);
    TSharedRef<FInternetAddr> addr = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->CreateInternetAddr();

    addr->SetIp(ip.Value);

    addr->SetPort(port);

    GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Trying to connect.")));

    bool connected = Socket->Connect(*addr);
}
