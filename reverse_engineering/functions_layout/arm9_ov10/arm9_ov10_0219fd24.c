
void FUN_0219fd24(undefined2 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined2 local_c [2];
  undefined4 uStack_8;
  
                    /* JUS-TAG source_file_inferred="WiFiGame.cpp" */
  if (DAT_0214ccf8 != 0) {
    local_c[0] = param_1;
    uStack_8 = param_4;
    cVar1 = FUN_0219b620();
    WiFiGame::WiFiGame_Static_SendCOMM(7,local_c,2,(int)cVar1,0xff);
  }
  return;
}

