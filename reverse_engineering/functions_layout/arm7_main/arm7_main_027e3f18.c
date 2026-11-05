
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027e3f18(int param_1)

{
  short sVar1;
  ushort uVar2;
  short *psVar3;
  undefined2 uVar4;
  undefined2 *puVar5;
  int iVar6;
  int iVar7;
  ushort local_250 [3];
  undefined1 auStack_24a [32];
  undefined1 local_22a;
  undefined1 auStack_229 [17];
  undefined1 auStack_218 [516];
  
                    /* JUS-TAG hw={"SYSTEM_SHARED":1} io=["027fff98"] */
  psVar3 = DAT_027f97f0;
  sVar1 = *DAT_027f97f0;
  if (((sVar1 == 2) || (sVar1 == 3)) || (sVar1 == 5)) {
    *(undefined4 *)(DAT_027f97f0 + 0xc2) = *(undefined4 *)(param_1 + 4);
    uVar2 = *(ushort *)(param_1 + 2);
    psVar3[200] = uVar2;
    uVar4 = *(undefined2 *)(param_1 + 8);
    FUN_037fe788(param_1 + 10,local_250,6);
    if ((local_250[0] != 0xffff) && ((local_250[0] & 1) != 0)) {
      local_250[0] = local_250[0] & 0xfffe;
    }
    if (uVar2 == 0) {
      puVar5 = (undefined2 *)FUN_03808074();
      *puVar5 = 10;
      puVar5[1] = 6;
      puVar5[4] = 4;
      FUN_038080d0();
    }
    else if ((1 << (uVar2 & 0xff) & (uint)(ushort)psVar3[0xfa]) == 0) {
      puVar5 = (undefined2 *)FUN_03808074();
      *puVar5 = 10;
      puVar5[1] = 6;
      puVar5[4] = 4;
      FUN_038080d0();
    }
    else {
      psVar3[0x73] = 2;
      iVar6 = FUN_027e2164(auStack_218);
      if (*(short *)(iVar6 + 4) == 0) {
        if (*(short *)(iVar6 + 6) == 0x10) {
          iVar6 = FUN_027e0378(10,auStack_218);
          if (iVar6 == 0) {
            return;
          }
          iVar6 = FUN_027e21d4(auStack_218);
          if (*(short *)(iVar6 + 4) != 0) {
            FUN_027e3924(0x303,*(short *)(iVar6 + 4),0);
            return;
          }
          *psVar3 = 3;
          iVar6 = FUN_027e2d1c(auStack_218,1,0,1);
          if (*(short *)(iVar6 + 4) != 0) {
            FUN_027e3924(1,*(short *)(iVar6 + 4),0);
            return;
          }
          psVar3[99] = 1;
        }
        *psVar3 = 5;
        MIi_CpuClear16(0xffff,auStack_24a,0x20);
        local_22a = (undefined1)uVar2;
        FUN_037fe6f4(auStack_229,0,0xf);
        iVar6 = FUN_027e2c60(auStack_218,0x11e,local_250,0,auStack_24a,1,&local_22a,uVar4);
        if (*(short *)(iVar6 + 4) == 0) {
          puVar5 = (undefined2 *)FUN_03808074();
          if (*(short *)(iVar6 + 8) == 0) {
            *puVar5 = 10;
            puVar5[1] = 0;
            puVar5[4] = 4;
            puVar5[8] = uVar2;
            puVar5[9] = 0;
          }
          else {
            MIi_CpuClear16(0,*(int *)(psVar3 + 0xc2) + 0x40,0x80);
            FUN_037fe788(iVar6 + 10,*(undefined4 *)(psVar3 + 0xc2),
                         (uint)*(ushort *)(iVar6 + 10) << 1);
            *puVar5 = 10;
            puVar5[1] = 0;
            puVar5[4] = 5;
            puVar5[8] = *(undefined2 *)(iVar6 + 0x40);
            iVar7 = (int)(*(ushort *)(iVar6 + 0xc) & 0xff) >> 2;
            if ((*(ushort *)(iVar6 + 0xc) & 2) == 0) {
              iVar7 = iVar7 + 0x19;
            }
            uVar4 = FUN_027e0298(iVar7);
            puVar5[9] = uVar4;
            _DAT_027fff98 =
                 (ushort)iVar7 ^ (ushort)((uint)_DAT_027fff98 << 1) ^
                 (ushort)(((uint)_DAT_027fff98 << 1) >> 0x10);
            puVar5[10] = *(undefined2 *)(iVar6 + 0x14);
            FUN_037fe788(iVar6 + 0xe,puVar5 + 5,6);
            MIi_CpuCopy16(iVar6 + 0x16,puVar5 + 0xb,0x20);
            puVar5[0x1b] = *(undefined2 *)(iVar6 + 0x46);
            if ((ushort)puVar5[0x1b] < 0x81) {
              MIi_CpuClear16(0,puVar5 + 0x1c,0x80);
              MIi_CpuCopy16(iVar6 + 0x4a,puVar5 + 0x1c,(ushort)puVar5[0x1b] + 1 & 0xfffffffe);
            }
            else {
              *puVar5 = 10;
              puVar5[1] = 0;
              puVar5[4] = 4;
              puVar5[8] = uVar2;
              puVar5[9] = 0;
            }
          }
          FUN_038080d0(puVar5);
        }
        else {
          FUN_027e3924(2,*(short *)(iVar6 + 4),0);
        }
      }
      else {
        FUN_027e3924(0x308,*(short *)(iVar6 + 4),0);
      }
    }
  }
  else {
    puVar5 = (undefined2 *)FUN_03808074();
    *puVar5 = 10;
    puVar5[1] = 3;
    puVar5[4] = 4;
    FUN_038080d0();
  }
  return;
}

