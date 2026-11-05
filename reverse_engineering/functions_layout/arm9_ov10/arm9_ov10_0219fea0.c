
void FUN_0219fea0(undefined1 param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined1 local_c;
  undefined1 local_b;
  undefined4 uStack_8;
  
                    /* JUS-TAG source_file_inferred="WiFiGame.cpp" */
  if (DAT_0214ccf8 != 0) {
    local_c = param_1;
    local_b = param_2;
    uStack_8 = param_4;
    cVar1 = FUN_0219b620();
    WiFiGame::WiFiGame_Static_SendCOMM(0xc,&local_c,2,(int)cVar1,0xff);
  }
  return;
}

