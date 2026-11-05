
void FUN_0219f98c(void)

{
  char cVar1;
  uint uVar2;
  undefined4 in_r3;
  
                    /* JUS-TAG source_file_inferred="WiFiGame.cpp" */
  if (DAT_0214ccf8 != 0) {
    cVar1 = FUN_0219b620();
    uVar2 = FUN_0219b688();
    WiFiGame::WiFiGame_Static_SendCOMM(3,0,0,(int)cVar1,1 << (uVar2 & 0xff) & 0xff,in_r3);
  }
  return;
}

