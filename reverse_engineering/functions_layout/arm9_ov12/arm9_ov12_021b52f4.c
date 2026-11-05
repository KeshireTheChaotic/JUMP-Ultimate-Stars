
void FUN_021b52f4(void)

{
  uint uVar1;
  undefined4 in_r3;
  int iVar2;
  uint uVar3;
  undefined1 auStack_18 [4];
  undefined4 uStack_14;
  
                    /* JUS-TAG source_file_inferred="ALWidgetBase.cpp" */
  uStack_14 = in_r3;
  for (uVar3 = 0; uVar1 = DAT_021d5190, uVar3 < DAT_021d5190; uVar3 = uVar3 + 1) {
    iVar2 = *(int *)(DAT_021d518c + uVar3 * 4);
    if (iVar2 != 0) {
      FUN_021b8558(iVar2);
      FUN_0201b244(iVar2);
    }
  }
  FUN_0200f69c(auStack_18,1);
  DAT_021d5190 = DAT_021d5190 - uVar1;
  return;
}

