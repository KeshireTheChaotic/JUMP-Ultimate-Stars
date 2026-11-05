
void FUN_02169a78(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 local_10;
  undefined4 uStack_c;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x124);
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  uStack_c = param_4;
  if (iVar1 == 0) {
    (**(code **)(iVar2 + 0x10))(iVar2,*(undefined4 *)(iVar2 + 0x14),0);
    FUN_0207342c(0x78,1);
  }
  else if (iVar1 == 1) {
    func_0x021b7170();
    *(undefined1 *)(iVar2 + 0x70) = 0;
    FUN_020735e4();
    FUN_020734e0(6);
    FUN_0207367c(0);
    FUN_0207361c(6,0);
    FUN_02073f24(8,0,0x37);
    local_10 = 0;
    FUN_02150a10(*(undefined4 *)(iVar2 + 0x34),&local_10);
    FUN_02028384(*(undefined4 *)(*(int *)(iVar2 + 0x18) + 4),FUN_02169438);
    FUN_0207342c(0x78,1);
  }
  return;
}

