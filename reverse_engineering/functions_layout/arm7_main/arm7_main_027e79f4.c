
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_027e79f4(uint param_1)

{
  undefined2 uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ushort uVar6;
  ushort local_228 [2];
  uint uStack_224;
  undefined4 local_220;
  undefined1 auStack_21c [516];
  
                    /* JUS-TAG hw={"WIRELESS":1} io=["048080f8"] */
  iVar3 = DAT_027f97f0;
  OS_DisableInterrupts();
  uVar6 = *(ushort *)(iVar3 + 0x182);
  uVar1 = *(undefined2 *)(iVar3 + 0x86);
  OS_RestoreInterrupts();
  local_228[0] = 0;
  if (*(short *)(iVar3 + 0x88) == 1) {
    param_1 = 0xffff;
    *(undefined2 *)(iVar3 + 0x88) = 0;
  }
  if (*(short *)(iVar3 + 0x9e) == 0) {
    uVar2 = *(ushort *)(iVar3 + 0x3a);
    iVar4 = FUN_027e73b4(param_1,(uint)uVar6,uVar1,local_228);
    if (iVar4 == 1) {
      *(undefined2 *)(iVar3 + 0x62) = 0;
      *(undefined2 *)(iVar3 + 100) = 0;
      return;
    }
    uVar5 = uVar2 + 2;
    if (*(short *)(iVar3 + 0x92) == 1) {
      param_1 = uStack_224;
    }
    param_1 = param_1 & uVar6;
    uVar6 = (ushort)param_1;
    iVar4 = FUN_03804440(param_1);
    if ((int)(uint)*(ushort *)(iVar3 + 0x72) < (int)((uVar2 + 0xc) * iVar4 + 0x29 & 0xffffffe0)) {
      FUN_027e6f14(0,param_1);
      *(undefined2 *)(iVar3 + 0x62) = 0;
      *(undefined2 *)(iVar3 + 100) = 0;
      return;
    }
    if ((*(short *)(iVar3 + 0x62) == 1) || (*(short *)(iVar3 + 100) == 1)) {
      FUN_027e69b4(local_220,uVar5,param_1,*(undefined2 *)(iVar3 + 0x40));
      local_228[0] = local_228[0] | 0x8000;
    }
  }
  else {
    *(undefined2 *)(iVar3 + 0x9e) = 0;
    uVar5 = 0x80d6;
    local_220 = 0;
    local_228[0] = 0;
    OS_DisableInterrupts();
    *(short *)(iVar3 + 0x62) = *(short *)(iVar3 + 0x62) + 1;
    *(short *)(iVar3 + 100) = *(short *)(iVar3 + 100) + 1;
    OS_RestoreInterrupts();
  }
  FUN_027e2734(auStack_21c,0,0,uVar5 & 0xffff);
  *(ushort *)(iVar3 + 0x68) = uVar6;
  *(ushort *)(iVar3 + 0x6a) = local_228[0];
  *(short *)(iVar3 + 0x6c) = (short)uVar5;
  *(short *)(iVar3 + 0x6e) = (short)local_220;
  return;
}

