
void FUN_02153ce8(int param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int extraout_r1;
  uint uVar4;
  int unaff_r4;
  int unaff_r5;
  int iVar5;
  int unaff_r6;
  int unaff_r7;
  int unaff_r8;
  int unaff_r9;
  int unaff_r10;
  int unaff_r11;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  undefined4 uStack00000018;
  undefined4 uStack0000001c;
  undefined4 uStack00000020;
  undefined1 uStack00000024;
  undefined1 uStack00000028;
  undefined1 uStack00000030;
  
  do {
    _uStack00000024 = param_1;
    FUN_0214ce68(*(undefined4 *)(unaff_r6 + unaff_r7 * 4 + 0xd0),param_2,&uStack00000020);
    unaff_r7 = unaff_r7 + 1;
    if (10 < unaff_r7) {
      iVar3 = *(char *)(unaff_r11 + 0x46e) + -1;
      if (unaff_r8 <= iVar3) {
        unaff_r8 = iVar3;
      }
      if (*(char *)(unaff_r11 + 0x46e) != 0) {
        in_stack_00000008 = unaff_r5;
        in_stack_0000000c = iVar3;
      }
      unaff_r5 = unaff_r5 + 1;
      if (3 < unaff_r5) {
        if (in_stack_00000004 != 0) {
          iVar3 = unaff_r10 + unaff_r9 * 4;
          if (unaff_r9 == 3) {
            uVar4 = *(uint *)(iVar3 + 0x454) & 0xffff;
            FUN_0200d12c(uVar4,10);
            iVar3 = FUN_0200d12c(uVar4,10);
            iVar5 = (iVar3 + 1) * 0x2c + unaff_r10 + 0xd0;
            iVar3 = FUN_02152d80(*(undefined4 *)(iVar5 + extraout_r1 * 4));
            if (iVar3 == 0) {
              func_0x021b6214(*(undefined4 *)(*(int *)(iVar5 + extraout_r1 * 4) + 4),1);
            }
            else {
              func_0x021b6214(*(undefined4 *)(*(int *)(unaff_r10 + 0x180) + 4),1);
            }
          }
          else {
            uVar4 = *(uint *)(iVar3 + 0x454);
            iVar5 = (uVar4 >> 0x10) * 0x2c + unaff_r10 + 0xd0;
            uVar4 = uVar4 & 0xffff;
            iVar3 = FUN_02152d80(*(undefined4 *)(iVar5 + uVar4 * 4));
            if (iVar3 == 0) {
              func_0x021b6214(*(undefined4 *)(*(int *)(iVar5 + uVar4 * 4) + 4),1);
            }
            else {
              func_0x021b6214(*(undefined4 *)(*(int *)(unaff_r10 + 0x180) + 4),1);
            }
          }
        }
        iVar3 = unaff_r8 / 2;
        if (in_stack_0000000c < unaff_r8 / 2) {
          iVar3 = in_stack_0000000c;
        }
        piVar2 = *(int **)(*(int *)(unaff_r10 + 0x180) + 4);
        (**(code **)(*piVar2 + 0x160))
                  (piVar2,1,*(undefined4 *)
                             (*(int *)(in_stack_00000008 * 0x2c + unaff_r10 + iVar3 * 4 + 0xd0) + 4)
                  );
        uStack00000018 =
             ((*(byte *)(unaff_r10 + 0x46d) - 8) + (uint)*(byte *)(unaff_r4 + 0xe)) * 0x1000;
        uStack0000001c = (int)(*(byte *)(unaff_r4 + 0xb) - 0x10) / 2 << 0xc;
        FUN_0214ce68(*(undefined4 *)(unaff_r10 + 0x180),&uStack0000001c,&uStack00000018);
        return;
      }
      unaff_r6 = unaff_r5 * 0x2c + unaff_r10;
      unaff_r11 = unaff_r10 + unaff_r5;
      in_stack_00000014 = unaff_r11 + 0x400;
      unaff_r7 = 0;
      in_stack_00000010 = -0x10;
    }
    iVar3 = *(int *)(unaff_r6 + unaff_r7 * 4 + 0xd0);
    if (unaff_r7 < *(char *)(in_stack_00000014 + 0x6e)) {
      (**(code **)(**(int **)(iVar3 + 4) + 0x14c))();
      uVar1 = FUN_02020ed0(*(undefined4 *)(unaff_r6 + unaff_r7 * 4 + 0xd0),0);
      FUN_02020eb4(*(undefined4 *)(unaff_r6 + unaff_r7 * 4 + 0xd0),uVar1);
      if (unaff_r9 == 4) {
        FUN_021509f8(&uStack00000028,in_stack_00000010,in_stack_00000010 + 8,0x10);
        uVar1 = FUN_02150958(0,&uStack00000028,&DAT_02093c8c);
        FUN_02020e98(*(undefined4 *)(unaff_r6 + unaff_r7 * 4 + 0xd0),uVar1);
      }
      else {
        FUN_021509f8(&uStack00000030,in_stack_00000010 + 8,in_stack_00000010 + 8,8);
        uVar1 = FUN_02150958(0,&uStack00000030,&DAT_02093c8c);
        FUN_02020e98(*(undefined4 *)(unaff_r6 + unaff_r7 * 4 + 0xd0),uVar1);
      }
    }
    else {
      piVar2 = *(int **)(iVar3 + 4);
      (**(code **)(*piVar2 + 0x148))(piVar2,8);
    }
    uStack00000020 =
         ((uint)*(byte *)(unaff_r4 + 0xe) + unaff_r5 * (uint)*(byte *)(unaff_r4 + 0x10) + 0x10) *
         0x1000;
    param_2 = &uStack00000024;
    param_1 = ((uint)*(byte *)(unaff_r4 + 0xd) + unaff_r7 * (uint)*(byte *)(unaff_r4 + 0xf) + 0xc) *
              0x1000;
  } while( true );
}

