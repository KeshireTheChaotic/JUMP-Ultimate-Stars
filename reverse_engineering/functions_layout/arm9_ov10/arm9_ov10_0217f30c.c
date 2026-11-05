
void FUN_0217f30c(int param_1,int param_2,undefined4 param_3)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = FUN_02004d40(param_3,s__final__021a4c60);
  FUN_0217f900(param_2,param_3);
  if (iVar2 != 0) {
    bVar1 = *(byte *)(param_2 + 0x14);
    if ((bVar1 & 4) == 0) {
      *(byte *)(param_2 + 0x14) = bVar1 | 0x42;
    }
    else {
      *(byte *)(param_2 + 0x14) = bVar1 | 0x41;
    }
    *(byte *)(param_2 + 0x14) = *(byte *)(param_2 + 0x14) & 0xf3;
    iVar2 = FUN_02001ed8();
    *(int *)(param_2 + 0x1c) = iVar2 - *(int *)(param_2 + 0x1c);
    FUN_0217f638(param_1 + 8,param_2);
    (**(code **)(param_1 + 0x44))(param_1,0,param_2,*(undefined4 *)(param_1 + 0x48));
  }
  return;
}

