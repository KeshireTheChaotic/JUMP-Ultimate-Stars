
void FUN_02159610(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  undefined1 auStack_24 [12];
  undefined4 uStack_18;
  
  iVar2 = *(int *)(param_1 + 4);
  uStack_18 = param_4;
  if (*(int *)(iVar2 + 0x94) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_021504fc();
  }
  if (param_2 == 0) {
    if ((((DAT_021722b4 & 0x10000000) == 0) ||
        ((*(uint *)(*(int *)(iVar3 + 4) + 0x124) & 0x10000000) != 0)) &&
       (((DAT_021722b4 & 0x10000000) != 0 ||
        ((*(uint *)(*(int *)(iVar3 + 4) + 0x124) & 0x10000000) == 0)))) {
      iVar1 = FUN_02023fb0(*(undefined4 *)(param_1 + 4),0x564d5049,0);
      if (iVar1 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = FUN_021595cc();
      }
      local_40 = 0;
      local_3c = (int)*(short *)(iVar2 + 0xa2) << 0xc;
      local_38 = (int)*(short *)(iVar2 + 0xa0) << 0xc;
      FUN_021595f4(auStack_24,&local_38,&local_3c,&local_40);
      FUN_02013c48(*(undefined4 *)(iVar1 + 4),auStack_24,0);
    }
    else {
      local_34 = (int)*(short *)(iVar2 + 0xa2) << 0xc;
      local_30 = (int)*(short *)(iVar2 + 0xa0) << 0xc;
      FUN_0214ce68(param_1,&local_30,&local_34);
    }
    DAT_021722b4 = *(uint *)(*(int *)(iVar3 + 4) + 0x124);
  }
  else {
    local_2c = (int)*(short *)(iVar2 + 0xa2) << 0xc;
    local_28 = (int)*(short *)(iVar2 + 0xa0) << 0xc;
    FUN_0214ce68(param_1,&local_28,&local_2c);
  }
  iVar2 = func_0x021b712c(*(undefined4 *)(iVar3 + 4));
  if (iVar2 == 0) {
    FUN_0207342c(0x78,3);
  }
  return;
}

