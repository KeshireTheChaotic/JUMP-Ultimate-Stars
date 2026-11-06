
void FUN_0217e82c(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_02176568();
  iVar2 = DAT_021a7d10 + iVar1 * 0x30;
  if ((*(int *)(iVar2 + 4) != 0) && (param_3 <= *(int *)(iVar2 + 8))) {
    FUN_02051890(param_2,*(int *)(iVar2 + 4),param_3);
    if (*(code **)(DAT_021a7d10 + 0x604) != (code *)0x0) {
      (**(code **)(DAT_021a7d10 + 0x604))(iVar1,*(undefined4 *)(iVar2 + 4),param_3);
    }
    if ((*(int *)(DAT_021a7d10 + 0x608) != 0) && (*(int *)(iVar2 + 0x2c) != 0)) {
      uVar3 = OS_GetTick();
      *(undefined8 *)(iVar2 + 0x24) = uVar3;
    }
  }
  return;
}

