
/* JUS-CLASS jus_Class_020941c0::vfunc_07 [class-virtual] slot 7 of vtable 020941c0 (own slot, not
   inherited) */

int * jus_Class_020941c0::vfunc_07(undefined4 param_1,int *param_2)

{
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  uint *puVar12;
  uint uVar13;
  undefined4 uStack_430;
  int *piStack_42c;
  uint uStack_428;
  undefined4 auStack_424 [256];
  
  iVar4 = (**(code **)(*param_2 + 0x2c))(param_2,0);
  iVar5 = (**(code **)(*param_2 + 0x28))();
  if (*(char *)(iVar4 + iVar5 + 4) == '\0') {
    iVar6 = (**(code **)(*param_2 + 0x2c))();
    iVar7 = (**(code **)(*param_2 + 0x28))();
    iVar6 = iVar6 + iVar7;
    uVar1 = *(ushort *)(iVar6 + 0x18);
    uVar2 = *(ushort *)(iVar6 + 6);
    uStack_428 = (uint)*(ushort *)(iVar6 + 0x1a);
    puVar12 = &uStack_428;
    uStack_430 = *(undefined4 *)(iVar6 + 8);
    uVar8 = *(uint *)(iVar6 + 0x10);
    uVar9 = *(uint *)(iVar6 + 0x14);
  }
  else {
    iVar6 = (**(code **)(*param_2 + 0x2c))(param_2,0);
    iVar7 = (**(code **)(*param_2 + 0x28))();
    iVar6 = iVar6 + iVar7;
    uVar1 = *(ushort *)(iVar6 + 0x1a);
    uStack_430 = *(undefined4 *)(iVar6 + 8);
    uVar2 = *(ushort *)(iVar6 + 6);
    uVar8 = *(uint *)(iVar6 + 0x10);
    uVar9 = *(uint *)(iVar6 + 0x14);
    puVar12 = (uint *)(iVar6 + 0x1c);
  }
  uVar10 = (uint)uVar2;
  iVar4 = iVar4 + iVar5 + (uint)uVar1;
  piVar11 = (int *)0x0;
  if (uVar10 != 0) {
    piVar11 = (int *)(**(code **)*DAT_020a1044)(DAT_020a1044,uVar10);
    FUN_0200f69c(auStack_424,0x400);
    for (uVar13 = 0; uVar13 < uVar10; uVar13 = uVar13 + 1) {
      iVar5 = iVar4 + uVar13 * 4;
      auStack_424[uVar13] =
           CONCAT13(*(undefined1 *)(iVar5 + 3),
                    CONCAT12(*(undefined1 *)(iVar4 + uVar13 * 4),
                             CONCAT11(*(undefined1 *)(iVar5 + 1),*(undefined1 *)(iVar5 + 2))));
    }
    FUN_02029ca0(piVar11,auStack_424,0,uVar10,0);
  }
  bVar3 = false;
  while (!bVar3) {
    piStack_42c = (int *)FUN_0201650c(uStack_430,0,0);
    uVar10 = *puVar12;
    iVar4 = (**(code **)(*param_2 + 0x28))();
    FUN_02017024(piStack_42c,uVar8,uVar9,param_2,iVar4 + uVar10);
    if (piVar11 != (int *)0x0) {
      (**(code **)(*piStack_42c + 0x6c))(piStack_42c,piVar11);
    }
    uVar8 = uVar8 >> 1;
    uVar9 = uVar9 >> 1;
    bVar3 = true;
  }
  if (piVar11 != (int *)0x0) {
    (**(code **)(*piVar11 + 0xc))();
  }
  return piStack_42c;
}

