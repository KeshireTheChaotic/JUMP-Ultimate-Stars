
undefined4 FUN_027e8110(undefined2 *param_1,undefined2 *param_2)

{
  ushort uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 auStack_218 [516];
  
  iVar5 = DAT_027f97f0;
  iVar3 = FUN_027e21c0(auStack_218);
  if (*(short *)(iVar3 + 4) == 0) {
    iVar3 = FUN_027e21ec(auStack_218);
    if (*(short *)(iVar3 + 4) == 0) {
      FUN_027e80d8();
      iVar3 = FUN_027e2230(auStack_218);
      if (*(short *)(iVar3 + 4) == 0) {
        uVar1 = *(ushort *)(iVar3 + 6);
        *(ushort *)(iVar5 + 500) = uVar1;
        uVar2 = FUN_03807f48(uVar1 >> 1);
        *(undefined2 *)(iVar5 + 0x1f6) = uVar2;
        FUN_027e2470(auStack_218,0xffff,0x28,5);
        *(undefined4 *)(iVar5 + 0x7b8) = 0x1ff621;
        *(undefined4 *)(iVar5 + 0x7bc) = 0;
        *(undefined2 *)(iVar5 + 0x1ec) = 2;
        *(undefined2 *)(iVar5 + 0x1ee) = 1;
        iVar3 = FUN_027e2190(auStack_218);
        if (*(short *)(iVar3 + 4) == 0) {
          MIi_CpuCopy16(iVar3 + 6,iVar5 + 0x20,8);
          *(undefined2 *)(iVar5 + 0x28) = *(undefined2 *)(iVar3 + 0xe);
          *(undefined2 *)(iVar5 + 0x2c) = *(undefined2 *)(iVar3 + 0x10);
          *(undefined2 *)(iVar5 + 0x2e) = *(undefined2 *)(iVar3 + 0x12);
          *(undefined2 *)(iVar5 + 0x2a) = *(undefined2 *)(iVar3 + 0x14);
          iVar3 = FUN_027e2248(auStack_218);
          if (*(short *)(iVar3 + 4) == 0) {
            FUN_037fe788(iVar3 + 6,iVar5 + 0xe0,6);
            iVar5 = FUN_027e23b0(auStack_218,1);
            if (*(short *)(iVar5 + 4) == 0) {
              uVar4 = 1;
            }
            else {
              *param_1 = 0x215;
              *param_2 = *(undefined2 *)(iVar5 + 4);
              uVar4 = 0;
            }
          }
          else {
            *param_1 = 0x281;
            *param_2 = *(undefined2 *)(iVar3 + 4);
            uVar4 = 0;
          }
        }
        else {
          *param_1 = 0x306;
          *param_2 = *(undefined2 *)(iVar3 + 4);
          uVar4 = 0;
        }
      }
      else {
        *param_1 = 0x283;
        *param_2 = *(undefined2 *)(iVar3 + 4);
        uVar4 = 0;
      }
    }
    else {
      *param_1 = 0x302;
      *param_2 = *(undefined2 *)(iVar3 + 4);
      uVar4 = 0;
    }
  }
  else {
    *param_1 = 0x304;
    *param_2 = *(undefined2 *)(iVar3 + 4);
    uVar4 = 0;
  }
  return uVar4;
}

