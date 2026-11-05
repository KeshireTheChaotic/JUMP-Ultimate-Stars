
void FUN_01ff9508(uint *param_1,undefined4 param_2,int param_3,uint param_4)

{
  byte bVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  int iVar4;
  uint unaff_r4;
  uint unaff_r5;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint *puVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined8 uVar15;
  
  uVar15 = CONCAT44(param_2,param_1);
  puVar13 = (undefined1 *)((int)param_1 + 0x3a);
  uVar7 = *param_1;
  uVar6 = unaff_r5 >> 2;
  do {
    uVar5 = unaff_r4 >> 2;
    do {
      iVar4 = (int)uVar15;
      uVar11 = (uint)(byte)puVar13[-5];
      if ((uint)(byte)puVar13[-1] < (uint)(byte)puVar13[-5]) {
        uVar11 = (uint)(byte)puVar13[-1];
      }
      if (uVar11 == 9) {
        uVar11 = 2;
      }
      if (CARRY4(param_4,param_4)) {
        *puVar13 = (char)uVar11;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(uVar11) {
        case 0:
          puVar9 = (undefined4 *)(*(int *)(iVar4 + -8) + uVar7);
          uVar12 = puVar9[-0x40];
          *puVar9 = uVar12;
          puVar9[0x40] = uVar12;
          puVar9[0x80] = uVar12;
          puVar9[0xc0] = uVar12;
          return;
        case 1:
          puVar9 = (undefined4 *)(*(int *)(iVar4 + -8) + uVar7);
          uVar3 = CONCAT11(*(undefined1 *)((int)puVar9 + -1),*(undefined1 *)((int)puVar9 + -1));
          *puVar9 = CONCAT22(uVar3,uVar3);
          uVar3 = CONCAT11(*(undefined1 *)((int)puVar9 + 0xff),*(undefined1 *)((int)puVar9 + 0xff));
          puVar9[0x40] = CONCAT22(uVar3,uVar3);
          uVar3 = CONCAT11(*(undefined1 *)((int)puVar9 + 0x1ff),*(undefined1 *)((int)puVar9 + 0x1ff)
                          );
          puVar9[0x80] = CONCAT22(uVar3,uVar3);
          uVar3 = CONCAT11(*(undefined1 *)((int)puVar9 + 0x2ff),*(undefined1 *)((int)puVar9 + 0x2ff)
                          );
          puVar9[0xc0] = CONCAT22(uVar3,uVar3);
          return;
        case 3:
          puVar13 = (undefined1 *)(*(int *)(iVar4 + -8) + uVar7);
          uVar5 = (uint)(byte)puVar13[-0xfe];
          *puVar13 = (char)((byte)puVar13[-0x100] + uVar5 + (uint)(byte)puVar13[-0xff] * 2 + 2 >> 2)
          ;
          uVar6 = (uint)(byte)puVar13[-0xfd];
          uVar2 = (undefined1)((byte)puVar13[-0xff] + 2 + uVar5 * 2 + uVar6 >> 2);
          puVar13[1] = uVar2;
          puVar13[0x100] = uVar2;
          uVar7 = (uint)(byte)puVar13[-0xfc];
          uVar2 = (undefined1)(uVar5 + 2 + uVar6 * 2 + uVar7 >> 2);
          puVar13[2] = uVar2;
          puVar13[0x101] = uVar2;
          puVar13[0x200] = uVar2;
          uVar5 = (uint)(byte)puVar13[-0xfb];
          uVar2 = (undefined1)(uVar6 + 2 + uVar7 * 2 + uVar5 >> 2);
          puVar13[3] = uVar2;
          puVar13[0x102] = uVar2;
          puVar13[0x201] = uVar2;
          puVar13[0x300] = uVar2;
          uVar6 = (uint)(byte)puVar13[-0xfa];
          uVar2 = (undefined1)(uVar7 + 2 + uVar5 * 2 + uVar6 >> 2);
          puVar13[0x103] = uVar2;
          puVar13[0x202] = uVar2;
          puVar13[0x301] = uVar2;
          uVar2 = (undefined1)(uVar5 + 2 + uVar6 * 2 + (uint)(byte)puVar13[-0xf9] >> 2);
          puVar13[0x203] = uVar2;
          puVar13[0x302] = uVar2;
          puVar13[0x303] = (char)(uVar6 + (uint)(byte)puVar13[-0xf9] * 3 + 2 >> 2);
          return;
        case 4:
          puVar13 = (undefined1 *)(*(int *)(iVar4 + -8) + uVar7);
          uVar5 = (uint)(byte)puVar13[0xff];
          puVar13[0x300] =
               (char)((byte)puVar13[0x2ff] + 2 + (uint)(byte)puVar13[0x1ff] * 2 + uVar5 >> 2);
          uVar6 = (uint)(byte)puVar13[-1];
          uVar2 = (undefined1)((byte)puVar13[0x1ff] + 2 + uVar5 * 2 + uVar6 >> 2);
          puVar13[0x200] = uVar2;
          puVar13[0x301] = uVar2;
          uVar7 = (uint)(byte)puVar13[-0x101];
          uVar2 = (undefined1)(uVar5 + 2 + uVar6 * 2 + uVar7 >> 2);
          puVar13[0x100] = uVar2;
          puVar13[0x201] = uVar2;
          puVar13[0x302] = uVar2;
          uVar5 = (uint)(byte)puVar13[-0x100];
          uVar2 = (undefined1)(uVar6 + 2 + uVar7 * 2 + uVar5 >> 2);
          *puVar13 = uVar2;
          puVar13[0x101] = uVar2;
          puVar13[0x202] = uVar2;
          puVar13[0x303] = uVar2;
          uVar6 = (uint)(byte)puVar13[-0xff];
          uVar2 = (undefined1)(uVar7 + 2 + uVar5 * 2 + uVar6 >> 2);
          puVar13[1] = uVar2;
          puVar13[0x102] = uVar2;
          puVar13[0x203] = uVar2;
          uVar2 = (undefined1)(uVar5 + 2 + uVar6 * 2 + (uint)(byte)puVar13[-0xfe] >> 2);
          puVar13[2] = uVar2;
          puVar13[0x103] = uVar2;
          puVar13[3] = (char)(uVar6 + 2 + (uint)(byte)puVar13[-0xfe] * 2 +
                              (uint)(byte)puVar13[-0xfd] >> 2);
          return;
        case 5:
          puVar13 = (undefined1 *)(*(int *)(iVar4 + -8) + uVar7);
          uVar5 = (uint)(byte)puVar13[-1];
          puVar13[0x300] =
               (char)((byte)puVar13[0x1ff] + 2 + (uint)(byte)puVar13[0xff] * 2 + uVar5 >> 2);
          uVar6 = (uint)(byte)puVar13[-0x101];
          puVar13[0x200] = (char)((byte)puVar13[0xff] + 2 + uVar5 * 2 + uVar6 >> 2);
          uVar7 = (uint)(byte)puVar13[-0x100];
          uVar2 = (undefined1)(uVar5 + 2 + uVar6 * 2 + uVar7 >> 2);
          puVar13[0x100] = uVar2;
          puVar13[0x301] = uVar2;
          uVar2 = (undefined1)(uVar6 + uVar7 + 1 >> 1);
          *puVar13 = uVar2;
          puVar13[0x201] = uVar2;
          uVar5 = (uint)(byte)puVar13[-0xff];
          uVar2 = (undefined1)(uVar6 + 2 + uVar7 * 2 + uVar5 >> 2);
          puVar13[0x101] = uVar2;
          puVar13[0x302] = uVar2;
          uVar2 = (undefined1)(uVar7 + uVar5 + 1 >> 1);
          puVar13[1] = uVar2;
          puVar13[0x202] = uVar2;
          uVar6 = (uint)(byte)puVar13[-0xfe];
          uVar2 = (undefined1)(uVar7 + 2 + uVar5 * 2 + uVar6 >> 2);
          puVar13[0x102] = uVar2;
          puVar13[0x303] = uVar2;
          uVar2 = (undefined1)(uVar6 + uVar5 + 1 >> 1);
          puVar13[2] = uVar2;
          puVar13[0x203] = uVar2;
          puVar13[0x103] = (char)(uVar5 + 2 + uVar6 * 2 + (uint)(byte)puVar13[-0xfd] >> 2);
          puVar13[3] = (char)(uVar6 + (byte)puVar13[-0xfd] + 1 >> 1);
          return;
        case 6:
          puVar13 = (undefined1 *)(*(int *)(iVar4 + -8) + uVar7);
          uVar7 = (uint)(byte)puVar13[0x1ff];
          puVar13[0x300] = (char)((byte)puVar13[0x2ff] + uVar7 + 1 >> 1);
          uVar5 = (uint)(byte)puVar13[0xff];
          puVar13[0x301] = (char)((byte)puVar13[0x2ff] + 2 + uVar7 * 2 + uVar5 >> 2);
          uVar2 = (undefined1)(uVar7 + uVar5 + 1 >> 1);
          puVar13[0x200] = uVar2;
          puVar13[0x302] = uVar2;
          uVar6 = (uint)(byte)puVar13[-1];
          uVar2 = (undefined1)(uVar7 + 2 + uVar5 * 2 + uVar6 >> 2);
          puVar13[0x201] = uVar2;
          puVar13[0x303] = uVar2;
          uVar2 = (undefined1)(uVar6 + uVar5 + 1 >> 1);
          puVar13[0x100] = uVar2;
          puVar13[0x202] = uVar2;
          uVar7 = (uint)(byte)puVar13[-0x101];
          uVar2 = (undefined1)(uVar5 + 2 + uVar6 * 2 + uVar7 >> 2);
          puVar13[0x101] = uVar2;
          puVar13[0x203] = uVar2;
          uVar2 = (undefined1)(uVar6 + uVar7 + 1 >> 1);
          *puVar13 = uVar2;
          puVar13[0x102] = uVar2;
          uVar5 = (uint)(byte)puVar13[-0x100];
          uVar2 = (undefined1)(uVar6 + 2 + uVar7 * 2 + uVar5 >> 2);
          puVar13[1] = uVar2;
          puVar13[0x103] = uVar2;
          puVar13[2] = (char)(uVar7 + 2 + uVar5 * 2 + (uint)(byte)puVar13[-0xff] >> 2);
          puVar13[3] = (char)(uVar5 + 2 + (uint)(byte)puVar13[-0xff] * 2 +
                              (uint)(byte)puVar13[-0xfe] >> 2);
          return;
        case 7:
          puVar13 = (undefined1 *)(*(int *)(iVar4 + -8) + uVar7);
          uVar7 = (uint)(byte)puVar13[-0xfb];
          uVar5 = (uint)(byte)puVar13[-0xfc];
          puVar13[0x303] = (char)((byte)puVar13[-0xfa] + 2 + uVar7 * 2 + uVar5 >> 2);
          puVar13[0x203] = (char)(uVar7 + uVar5 + 1 >> 1);
          uVar6 = (uint)(byte)puVar13[-0xfd];
          uVar2 = (undefined1)(uVar7 + 2 + uVar5 * 2 + uVar6 >> 2);
          puVar13[0x103] = uVar2;
          puVar13[0x302] = uVar2;
          uVar2 = (undefined1)(uVar6 + uVar5 + 1 >> 1);
          puVar13[3] = uVar2;
          puVar13[0x202] = uVar2;
          uVar7 = (uint)(byte)puVar13[-0xfe];
          uVar2 = (undefined1)(uVar5 + 2 + uVar6 * 2 + uVar7 >> 2);
          puVar13[0x102] = uVar2;
          puVar13[0x301] = uVar2;
          uVar2 = (undefined1)(uVar6 + uVar7 + 1 >> 1);
          puVar13[2] = uVar2;
          puVar13[0x201] = uVar2;
          uVar5 = (uint)(byte)puVar13[-0xff];
          uVar2 = (undefined1)(uVar6 + 2 + uVar7 * 2 + uVar5 >> 2);
          puVar13[0x101] = uVar2;
          puVar13[0x300] = uVar2;
          uVar2 = (undefined1)(uVar7 + uVar5 + 1 >> 1);
          puVar13[1] = uVar2;
          puVar13[0x200] = uVar2;
          puVar13[0x100] = (char)(uVar7 + 2 + uVar5 * 2 + (uint)(byte)puVar13[-0x100] >> 2);
          *puVar13 = (char)((byte)puVar13[-0x100] + uVar5 + 1 >> 1);
          return;
        case 8:
          puVar13 = (undefined1 *)(*(int *)(iVar4 + -8) + uVar7);
          uVar7 = (uint)(byte)puVar13[0xff];
          *puVar13 = (char)((byte)puVar13[-1] + uVar7 + 1 >> 1);
          uVar5 = (uint)(byte)puVar13[0x1ff];
          puVar13[1] = (char)((byte)puVar13[-1] + 2 + uVar7 * 2 + uVar5 >> 2);
          uVar2 = (undefined1)(uVar7 + uVar5 + 1 >> 1);
          puVar13[2] = uVar2;
          puVar13[0x100] = uVar2;
          bVar1 = puVar13[0x2ff];
          uVar6 = (uint)bVar1;
          uVar2 = (undefined1)(uVar7 + 2 + uVar5 * 2 + uVar6 >> 2);
          puVar13[3] = uVar2;
          puVar13[0x101] = uVar2;
          uVar2 = (undefined1)(uVar6 + uVar5 + 1 >> 1);
          puVar13[0x102] = uVar2;
          puVar13[0x200] = uVar2;
          uVar2 = (undefined1)(uVar6 * 3 + uVar5 + 2 >> 2);
          puVar13[0x103] = uVar2;
          puVar13[0x201] = uVar2;
          puVar13[0x300] = bVar1;
          puVar13[0x202] = bVar1;
          puVar13[0x203] = bVar1;
          puVar13[0x301] = bVar1;
          puVar13[0x302] = bVar1;
          puVar13[0x303] = bVar1;
          return;
        }
        puVar10 = (uint *)(*(int *)(iVar4 + -8) + uVar7);
        if (uVar7 == 0) {
          uVar6 = 0x80;
        }
        else {
          if ((uVar7 & 0xff) != 0) {
            FUN_01ff9b64(iVar4,(int)((ulonglong)uVar15 >> 0x20),param_3 + -1,param_4 * 2,uVar5,uVar6
                         ,uVar7,0x1ff9578);
          }
          if (uVar7 >> 8 != 0) {
            FUN_01ff9b38();
          }
          uVar6 = 0;
        }
        uVar6 = uVar6 | uVar6 << 8;
        uVar6 = uVar6 | uVar6 << 0x10;
        *puVar10 = uVar6;
        puVar10[0x40] = uVar6;
        puVar10[0x80] = uVar6;
        puVar10[0xc0] = uVar6;
        return;
      }
      uVar8 = (param_4 & 0x7fffffff) >> 0x1c;
      param_4 = param_4 << 4;
      param_3 = param_3 + -4;
      if (uVar11 <= uVar8) {
        uVar8 = uVar8 + 1;
      }
      puVar14 = puVar13 + 1;
      *puVar13 = (char)uVar8;
      uVar15 = (*(code *)((uint)(&switchD_01ff9550::switchdataD_01ff94e4)[uVar8] & 0xfffffffc))();
      if (param_3 < -0xc) {
        uVar15 = FUN_01ff943c();
      }
      uVar7 = uVar7 + 4;
      uVar5 = uVar5 - 1;
      puVar13 = puVar14;
    } while (uVar5 != 0);
    puVar13 = puVar14 + (5 - (unaff_r4 >> 2));
    uVar7 = (uVar7 - unaff_r4) + 0x400;
    uVar6 = uVar6 - 1;
    if (uVar6 == 0) {
      if (param_3 < 0) {
        FUN_01ff943c();
      }
      FUN_01ff940c();
      (*(code *)((uint)PTR_FUN_01ff949c & 0xfffffffc))();
      return;
    }
  } while( true );
}

