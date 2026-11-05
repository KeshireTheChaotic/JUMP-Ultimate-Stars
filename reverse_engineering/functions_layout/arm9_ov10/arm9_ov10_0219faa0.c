
void FUN_0219faa0(void)

{
  char cVar1;
  
                    /* JUS-TAG source_file_inferred="WiFiGame.cpp" */
  if (DAT_0214ccf8 == 0) {
    return;
  }
  cVar1 = FUN_0219b620();
  WiFiGame::WiFiGame_Static_SendCOMM(0x24,0,0,(int)cVar1,0xff);
  return;
}

