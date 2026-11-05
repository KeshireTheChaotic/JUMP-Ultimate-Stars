
void FUN_0215313c(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_30;
  int local_2c [4];
  int local_1c;
  undefined4 uStack_18;
  
  iVar2 = *(int *)(param_1 + 4);
  uStack_18 = param_4;
  if (*(int *)(iVar2 + 0x94) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_0214d498();
  }
  if (*(int *)(*(int *)(param_1 + 4) + 0x9c) != 0) {
    FUN_0214d498();
  }
  if (param_2 == 0) {
    iVar4 = *(int *)(*(int *)(iVar3 + 4) + 0x10);
    iVar3 = *(int *)(*(int *)(iVar3 + 4) + 0x124);
    iVar5 = *(int *)(*(int *)(iVar4 + 0x330) + 0x34);
    uVar1 = FUN_02153010(param_1,0x31305053);
    if (*(char *)(iVar3 * 0x48 + iVar5 + 0x44) == '\x01') {
      local_2c[2] = 0x20000;
      FUN_02153260(local_2c + 2,iVar4 + 0x344);
      FUN_0214f244(uVar1,local_2c + 2);
    }
    else {
      local_2c[1] = 0x30000;
      FUN_02153260(local_2c + 1,iVar4 + 0x344);
      FUN_0214f244(uVar1,local_2c + 1);
    }
    local_30 = (int)*(short *)(iVar2 + 0xa2) << 0xc;
    local_2c[0] = (int)*(short *)(iVar2 + 0xa0) << 0xc;
    FUN_0214d4c0(param_1,local_2c,&local_30);
  }
  else {
    local_2c[3] = (int)*(short *)(iVar2 + 0xa2) << 0xc;
    local_1c = (int)*(short *)(iVar2 + 0xa0) << 0xc;
    FUN_0214d4c0(param_1,&local_1c,local_2c + 3);
  }
  return;
}

