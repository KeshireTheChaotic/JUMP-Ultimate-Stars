
undefined4 FUN_02077768(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int iVar9;
  
  puVar7 = *(undefined4 **)(param_1 + 0x558);
  uVar8 = 0;
  if (puVar7 == (undefined4 *)0x0) {
    return 0;
  }
  for (; puVar7 != (undefined4 *)0x0; puVar7 = (undefined4 *)*puVar7) {
    iVar9 = 0;
    *(undefined1 *)((int)puVar7 + 0x4a) = 0;
    *(undefined1 *)((int)puVar7 + 0x4b) = 0;
    *(undefined1 *)(puVar7 + 0x13) = 0;
    *(undefined1 *)((int)puVar7 + 0x1a) = 0;
    if (*(char *)(puVar7 + 0x10) == '\0') {
      bVar2 = *(byte *)((int)puVar7 + 0x41);
      iVar5 = *(int *)(DAT_0214bd80 + 0x40);
      do {
        uVar4 = (uint)*(byte *)((uint)bVar2 * 0x3c + iVar5 + iVar9 + 3);
        bVar1 = *(byte *)(*(int *)(DAT_0214bd80 + 0x50) + uVar4 * 4);
        iVar6 = *(int *)(DAT_0214bd80 + 0x50) + uVar4 * 4;
        if (bVar1 < 2) {
          FUN_02077a74(puVar7);
        }
        else if (bVar1 == 2) {
          (*(code *)(&PTR_FUN_0209f544)[*(byte *)(iVar6 + 1)])
                    (param_1,puVar7,iVar6,(&PTR_FUN_0209f544)[*(byte *)(iVar6 + 1)],param_4);
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < 5);
    }
  }
  puVar7 = *(undefined4 **)(param_1 + 0x558);
  do {
    if (puVar7 == (undefined4 *)0x0) {
      return uVar8;
    }
    if (*(char *)(puVar7 + 0x10) == '\x02') {
      bVar2 = *(byte *)(*(int *)(DAT_0214bd80 + 0x50) + (uint)*(byte *)((int)puVar7 + 0x41) * 4);
      iVar9 = *(int *)(DAT_0214bd80 + 0x50) + (uint)*(byte *)((int)puVar7 + 0x41) * 4;
      if (bVar2 < 2) {
        iVar9 = FUN_020779cc(param_1,puVar7);
        if ((iVar9 != 0) &&
           (iVar9 = FUN_02077a74(iVar9,*(undefined1 *)((int)puVar7 + 0x41)), iVar9 != 0)) {
          bVar3 = true;
          goto LAB_02077918;
        }
LAB_02077914:
        bVar3 = false;
      }
      else {
        if (bVar2 != 2) goto LAB_02077914;
        uVar4 = (uint)*(byte *)(iVar9 + 1);
        if ((uVar4 == 3 || uVar4 == 5) || uVar4 == 6) {
          iVar5 = FUN_020779cc(param_1,puVar7);
          if ((iVar5 == 0) ||
             (iVar9 = (*(code *)(&PTR_FUN_0209f544)[*(byte *)(iVar9 + 1)])(param_1,iVar5,iVar9),
             iVar9 == 0)) goto LAB_02077914;
          bVar3 = true;
        }
        else {
          iVar9 = (*(code *)(&PTR_FUN_0209f544)[uVar4])(param_1,puVar7,iVar9);
          if (iVar9 == 0) goto LAB_02077914;
          bVar3 = true;
        }
      }
LAB_02077918:
      if (bVar3) {
        uVar8 = 1;
      }
    }
    puVar7 = (undefined4 *)*puVar7;
  } while( true );
}

