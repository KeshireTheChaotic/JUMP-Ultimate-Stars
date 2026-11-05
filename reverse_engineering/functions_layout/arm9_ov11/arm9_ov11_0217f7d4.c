
void FUN_0217f7d4(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (*(int *)(param_1 + 0x88) == 0) {
    bVar1 = false;
  }
  else if ((*(uint *)(*(int *)(param_1 + 0x88) + 0x2c) & 8) == 0) {
    iVar2 = FUN_02175628(*(undefined4 *)(param_1 + 0x1c));
    for (puVar3 = *(undefined4 **)(*(int *)(*(int *)(iVar2 + 4) + 0x10) + 4);
        puVar3 != (undefined4 *)0x0; puVar3 = (undefined4 *)*puVar3) {
      if (*(int *)(param_1 + 0x88) == puVar3[2]) {
        bVar1 = false;
        goto LAB_0217f86c;
      }
    }
    FUN_0217f7c0(*(undefined4 *)(param_1 + 0x24));
    FUN_02176d14();
    FUN_0217f890(param_1);
    bVar1 = true;
    *(undefined1 *)(param_1 + 0x105) = 1;
  }
  else {
    FUN_0217f7c0(*(undefined4 *)(param_1 + 0x24));
    FUN_02176d14();
    FUN_0217f890(param_1);
    bVar1 = true;
    *(undefined1 *)(param_1 + 0x105) = 1;
  }
LAB_0217f86c:
  if (bVar1) {
    return;
  }
  (*(code *)(&PTR_FUN_021814e4)[*(byte *)(param_1 + 0x94)])(param_1);
  return;
}

