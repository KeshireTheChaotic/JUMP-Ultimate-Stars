
void FUN_0219fbac(void)

{
  char cVar1;
  int iVar2;
  
                    /* JUS-TAG source_file_inferred="WiFiGame.cpp" */
  if (DAT_0214ccf8 == 0) {
    return;
  }
  iVar2 = FUN_0219b634();
  if (iVar2 == 0) {
    return;
  }
  cVar1 = FUN_0219b620();
  WiFiGame::WiFiGame_Static_SendCOMM(0x105,0,0,(int)cVar1,0xff);
  return;
}

