
void FUN_027e5e7c(int param_1)

{
  short sVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  ushort uVar6;
  short *psVar7;
  undefined2 *puVar8;
  int iVar9;
  undefined1 local_22c [16];
  undefined1 auStack_21c [512];
  
  psVar7 = DAT_027f97f0;
  if (*DAT_027f97f0 == 2) {
    iVar9 = FUN_027e2164(auStack_21c);
    if (*(short *)(iVar9 + 4) == 0) {
      sVar1 = *(short *)(iVar9 + 6);
      psVar7[0x73] = 2;
      if (sVar1 == 0x10) {
        iVar9 = FUN_027e0378(10,auStack_21c);
        if (iVar9 == 0) {
          return;
        }
        iVar9 = FUN_027e21d4(auStack_21c);
        if (*(short *)(iVar9 + 4) != 0) {
          FUN_027e5e40(0x303);
          return;
        }
        *psVar7 = 3;
        iVar9 = FUN_027e2d1c(auStack_21c,1,0,1);
        if (*(short *)(iVar9 + 4) != 0) {
          FUN_027e5e40(1);
          return;
        }
        psVar7[99] = 1;
      }
      uVar2 = *(undefined2 *)(param_1 + 2);
      uVar3 = *(undefined2 *)(param_1 + 4);
      uVar4 = *(undefined2 *)(param_1 + 6);
      uVar5 = *(undefined2 *)(param_1 + 8);
      FUN_037fe6f4(local_22c,0,0x10);
      local_22c[0] = (undefined1)uVar4;
      iVar9 = FUN_027e28f4(auStack_21c,uVar2,uVar3,uVar5,local_22c);
      if (*(short *)(iVar9 + 4) == 0) {
        uVar6 = *(ushort *)(iVar9 + 8);
        iVar9 = FUN_027e21ec(auStack_21c);
        if (*(short *)(iVar9 + 4) == 0) {
          *psVar7 = 2;
          puVar8 = (undefined2 *)FUN_03808074();
          *puVar8 = 0x1e;
          puVar8[1] = 0;
          puVar8[4] = uVar6 & 0xff;
          puVar8[5] = uVar6 >> 8;
          FUN_038080d0();
        }
        else {
          FUN_027e5e40(0x302);
        }
      }
      else {
        FUN_027e5e40(10);
      }
    }
    else {
      FUN_027e5e40(0x308);
    }
  }
  else {
    puVar8 = (undefined2 *)FUN_03808074();
    *puVar8 = 0x1e;
    puVar8[1] = 3;
    FUN_038080d0();
  }
  return;
}

