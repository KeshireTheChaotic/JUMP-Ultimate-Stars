
void FUN_02029284(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  uVar3 = 0;
  do {
    iVar1 = uVar2 * 4;
    uVar2 = uVar2 + 1;
    *(undefined4 *)(param_1 + iVar1 + 0x18) = 0;
  } while (uVar2 < 4);
  *(undefined4 *)(param_1 + 0x28) = 0;
  uVar2 = 0;
  do {
    iVar1 = param_1 + uVar3 * 4;
    *(undefined4 *)(iVar1 + 0x30) = 0;
    uVar3 = uVar3 + 1;
    *(undefined4 *)(iVar1 + 0x90) = 0;
  } while (uVar3 < 0x10);
  do {
    iVar1 = param_1 + uVar2 * 4;
    *(undefined4 *)(iVar1 + 0x80) = 0;
    uVar2 = uVar2 + 1;
    *(undefined4 *)(iVar1 + 0x88) = 0;
  } while (uVar2 < 2);
  return;
}

