
/* WARNING: Removing unreachable block (ram,0x027e10bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027e1070(int param_1)

{
  short sVar1;
  int iVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined2 *puVar5;
  int iVar6;
  int iVar7;
  
                    /* JUS-TAG hw={"WIRELESS":2} io=["048080f8","048080fa"] */
  iVar2 = DAT_027f97f0;
  iVar6 = 0;
  if (*(int *)(DAT_027f97f0 + 0xc) != 0) {
    if (*(short *)(param_1 + 0xe) == 0) {
      iVar7 = 1;
      if ((int)((((_DAT_048080fa & 0xf) << 0xc | (int)(uint)_DAT_048080f8 >> 4) -
                (uint)*(ushort *)(DAT_027f97f0 + 0x82)) * 0x10000) >> 0x10 < 1) {
        return;
      }
    }
    else {
      iVar7 = 0;
    }
    uVar4 = OS_DisableInterrupts();
    if (*(short *)(iVar2 + 0x84) == 0) {
      OS_RestoreInterrupts();
    }
    else {
      *(undefined2 *)(iVar2 + 0x84) = 0;
      sVar1 = *(short *)(iVar2 + 0x90);
      FUN_037fd998(&DAT_0380bc10);
      OS_RestoreInterrupts(uVar4);
      uVar3 = 1;
      if ((*(short *)(iVar2 + 0x8c) != 0) &&
         ((iVar7 != 0 ||
          (((uint)*(ushort *)(param_1 + 0x3e) & 1 << (*(ushort *)(iVar2 + 0x188) & 0xff)) == 0)))) {
        uVar3 = 0;
      }
      if (*(short *)(iVar2 + 0x8c) != 0) {
        *(undefined2 *)(iVar2 + 0x8c) = 0;
      }
      if (*(short *)(iVar2 + 0x8e) != 0) {
        *(undefined2 *)(iVar2 + 0x8e) = 0;
        iVar6 = FUN_027e6f14(iVar7,uVar3);
      }
      if (sVar1 != 0) {
        puVar5 = (undefined2 *)FUN_03808074();
        *puVar5 = 0xe;
        if (iVar7 == 0) {
          if (((uint)*(ushort *)(param_1 + 0x3e) & 1 << (*(ushort *)(iVar2 + 0x188) & 0xff)) == 0) {
            puVar5[1] = 0;
          }
          else {
            puVar5[1] = 0xf;
          }
        }
        else {
          puVar5[1] = 9;
        }
        puVar5[2] = 0xd;
        *(undefined4 *)(puVar5 + 4) = 0;
        if (iVar7 == 0) {
          puVar5[6] = *(undefined2 *)(param_1 + 0x1c);
          puVar5[7] = *(undefined2 *)(param_1 + 0x1e);
          FUN_037fe788(param_1 + 0x28,puVar5 + 8,6);
          FUN_037fe788(param_1 + 0x2e,puVar5 + 0xb,6);
          puVar5[0xe] = *(undefined2 *)(param_1 + 0x3a);
          puVar5[0xf] = *(undefined2 *)(param_1 + 0x3c);
          puVar5[0x10] = *(undefined2 *)(param_1 + 0x3e);
        }
        FUN_038080d0(puVar5);
        if (sVar1 != 0) {
          if ((iVar6 == 1) || (*(short *)(iVar2 + 0x5e) == 0)) {
            if (*(short *)(iVar2 + 0x46) == 0) {
              FUN_027e0fd4();
            }
            else {
              FUN_037fd998(&DAT_0380bc3c);
              FUN_037fdaa4(&DAT_0380bc3c,*(undefined4 *)(iVar2 + 0x50),*(undefined4 *)(iVar2 + 0x54)
                           ,&LAB_027e1064,0);
            }
          }
          else {
            *(undefined2 *)(iVar2 + 0x5e) = 0;
            *(undefined2 *)(iVar2 + 0x60) = 1;
            *(undefined2 *)(iVar2 + 0x88) = 0;
          }
        }
      }
    }
  }
  return;
}

