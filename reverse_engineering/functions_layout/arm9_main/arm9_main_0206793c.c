
int FUN_0206793c(undefined1 param_1,int param_2,undefined4 param_3,int param_4)

{
  byte bVar1;
  char *pcVar2;
  int iVar3;
  int local_18;
  
  iVar3 = 0;
  local_18 = -1;
  if (*(byte *)(param_4 + 0xd12) != 0) {
    pcVar2 = (char *)(param_4 + 0x474);
    do {
      if ((((*(char *)(param_2 + 4) == *pcVar2) && (*(char *)(param_2 + 5) == pcVar2[1])) &&
          (*(char *)(param_2 + 6) == pcVar2[2])) &&
         (((*(char *)(param_2 + 7) == pcVar2[3] && (*(char *)(param_2 + 8) == pcVar2[4])) &&
          (*(char *)(param_2 + 9) == pcVar2[5])))) {
        local_18 = iVar3;
        break;
      }
      pcVar2 = pcVar2 + 0xc0;
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)(uint)*(byte *)(param_4 + 0xd12));
  }
  if (local_18 == -1) {
    FUN_020678f4(param_1,param_2,param_3,param_4);
    bVar1 = *(byte *)(param_4 + 0xd12);
    if (bVar1 < 10) {
      *(byte *)(param_4 + 0xd12) = bVar1 + 1;
    }
    local_18 = 10;
  }
  else {
    FUN_02067898(local_18,param_2,param_3,param_4);
  }
  return local_18;
}

