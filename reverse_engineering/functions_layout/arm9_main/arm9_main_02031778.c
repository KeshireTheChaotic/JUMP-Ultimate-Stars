
bool FUN_02031778(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  iVar1 = *(int *)(param_1 + 0x200);
  iVar2 = *(int *)(param_1 + 0x204);
  uVar6 = *(int *)(param_1 + 0x208) + 1U & 1;
  if (iVar1 == 0x40 || iVar2 == 0x40) {
    puVar3 = *(undefined4 **)(param_2 + 0x23c);
    while (puVar4 = puVar3, puVar4 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)*puVar4;
      if ((char)*(byte *)((int)puVar4 + 9) < '\0') {
        if ((*(byte *)((int)puVar4 + 9) & 0x1f) >> 4 == 0) {
          *(byte *)((int)puVar4 + 9) = *(byte *)((int)puVar4 + 9) | 0x10;
        }
        else {
          (**(code **)(puVar4[-8] + 0xc))();
        }
      }
    }
  }
  else {
    iVar5 = param_1 + uVar6 * 4;
    if (*(int *)(iVar5 + 0x200) != 0x40) {
      for (iVar7 = 0; iVar7 < *(int *)(iVar5 + 0x200); iVar7 = iVar7 + 1) {
        (**(code **)(**(int **)(param_1 + uVar6 * 0x100 + iVar7 * 4) + 0xc))();
      }
    }
  }
  *(undefined4 *)(param_1 + uVar6 * 4 + 0x200) = 0;
  *(uint *)(param_1 + 0x208) = uVar6;
  return iVar1 != 0 || iVar2 != 0;
}

