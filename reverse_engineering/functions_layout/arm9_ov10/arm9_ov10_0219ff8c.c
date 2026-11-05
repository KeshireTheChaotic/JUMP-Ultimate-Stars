
void FUN_0219ff8c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 local_c;
  undefined4 uStack_8;
  
                    /* JUS-TAG source_file_inferred="WiFiGame.cpp" */
  if (DAT_0214ccf8 != 0) {
    local_c = param_1;
    uStack_8 = param_4;
    cVar1 = FUN_0219b620();
    WiFiGame::WiFiGame_Static_SendCOMM(0x12,&local_c,4,(int)cVar1,0xff);
  }
  return;
}

