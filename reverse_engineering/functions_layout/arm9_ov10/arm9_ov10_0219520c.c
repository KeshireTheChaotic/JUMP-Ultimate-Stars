
void FUN_0219520c(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_40;
  int local_3c;
  int local_34;
  int local_30;
  char local_2c;
  undefined1 auStack_2b [23];
  
  if (*(short *)(param_1 + 0x32) == 4) {
    local_40 = 0x10;
    local_3c = 0x10;
    param_3 = 0;
  }
  else if (*(short *)(param_1 + 0x32) == 5) {
    local_40 = 0x14;
    local_3c = 0x10;
    param_3 = 0;
  }
  iVar1 = (param_3 + local_40 + local_3c) * 2;
  iVar4 = 0;
  if (0 < iVar1) {
    local_34 = 0;
    local_30 = 0;
    do {
      iVar2 = param_1 + 0x348;
      FUN_02196a88(iVar2);
      local_2c = (char)iVar4 + 'A';
      iVar3 = local_30;
      if (0 < iVar4 + 1) {
        do {
          FUN_021969fc(iVar2,&local_2c,1);
          iVar3 = iVar3 + 1;
        } while (iVar3 < iVar4 + 1);
      }
      FUN_021969fc(iVar2,param_1,0x30);
      FUN_021969fc(iVar2,param_1 + 0x54,0x20);
      FUN_021969fc(iVar2,param_1 + 0x34,0x20);
      FUN_021969a8(iVar2,auStack_2b);
      iVar3 = param_1 + 0x3fc;
      FUN_02196500(iVar3);
      FUN_02196474(iVar3,param_1,0x30);
      FUN_02196474(iVar3,auStack_2b,0x14);
      FUN_02196420(iVar3,param_1 + 0x74 + local_34);
      local_34 = local_34 + 0x10;
      iVar4 = iVar4 + 1;
    } while (local_34 < iVar1);
  }
  if (*(char *)(param_1 + 0x454) == '\0') {
    *(int *)(param_1 + 0xbc) = param_1 + 0x74;
    *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0xbc) + local_40 * 2;
    *(int *)(param_1 + 0x1d4) = param_1 + 0x74 + local_40;
    *(int *)(param_1 + 0x1d8) = *(int *)(param_1 + 0x1d4) + local_40 + local_3c;
  }
  else {
    *(int *)(param_1 + 0x1d4) = param_1 + 0x74;
    *(int *)(param_1 + 0x1d8) = *(int *)(param_1 + 0x1d4) + local_40 * 2;
    *(int *)(param_1 + 0xbc) = param_1 + 0x74 + local_40;
    *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0xbc) + local_40 + local_3c;
  }
  FUN_02197190(param_1 + 0x1e0,*(undefined4 *)(param_1 + 0x1d8),0x10);
  FUN_02197190(param_1 + 200,*(undefined4 *)(param_1 + 0xc0),0x10);
  return;
}

