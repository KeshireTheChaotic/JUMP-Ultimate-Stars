
void FUN_0217e718(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = DAT_021a7d10 + param_1 * 0x30;
  iVar1 = FUN_0217e948();
  if (iVar1 == 2) {
    if (*(int *)(iVar2 + 8) < *(int *)(iVar2 + 0x10) + param_3) {
      FUN_02175744(6,0xfffe82ac);
      return;
    }
    FUN_02051890(param_2,*(int *)(iVar2 + 4) + *(int *)(iVar2 + 0x10),param_3);
  }
  *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + param_3;
  if (*(int *)(iVar2 + 0x10) == *(int *)(iVar2 + 0x18)) {
    *(undefined1 *)(iVar2 + 0x1d) = 1;
    *(undefined4 *)(iVar2 + 0x10) = 0;
    *(undefined4 *)(iVar2 + 0x18) = 0;
    if (*(code **)(DAT_021a7d10 + 0x604) != (code *)0x0) {
      (**(code **)(DAT_021a7d10 + 0x604))(param_1,*(undefined4 *)(iVar2 + 4));
    }
  }
  if ((*(int *)(DAT_021a7d10 + 0x608) != 0) && (*(int *)(iVar2 + 0x2c) != 0)) {
    uVar3 = OS_GetTick();
    *(undefined8 *)(iVar2 + 0x24) = uVar3;
  }
  return;
}

