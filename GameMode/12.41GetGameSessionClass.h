

TSubClassOf<AGameSession> GetGameSessionClass(AFortGameModeAthena* GameMode, __int64* OutGameSession) {
    if (GameMode->GameSessionClass && AGameSession::GetPrivateStaticClass() != 0) {
        *OutGameSession = GameMode->GameSessionClass;
        return a2; //???? shit doesn't make sense but ok
    }
    else {
        *a2 = AGameSession::GetPrivateStaticClass();
        return a2;
    }
}
