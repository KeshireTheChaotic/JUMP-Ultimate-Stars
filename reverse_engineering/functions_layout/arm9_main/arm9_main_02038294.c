
uint FUN_02038294(char *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  char cVar1;
  int iVar2;
  uint local_10;
  
  local_10 = param_4;
  local_10 = FUN_02005f14();
  if ((local_10 == 0) && (cVar1 = *param_1, (int)cVar1 != 0x30)) {
    iVar2 = FUN_02004b04(param_1);
    if (iVar2 == 4) {
      FUN_02051890(param_1,&local_10,4);
    }
    else {
      iVar2 = FUN_02004b04(param_1);
      if (iVar2 == 2) {
        local_10 = (int)cVar1 | (int)param_1[1] << 8;
      }
    }
  }
  return local_10;
}

