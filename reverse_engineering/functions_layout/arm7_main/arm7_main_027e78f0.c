
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027e78f0(ushort param_1)

{
  ushort uVar1;
  int iVar2;
  undefined2 uVar3;
  int iVar4;
  undefined4 uVar5;
  ushort uVar6;
  undefined1 auStack_218 [512];
  
                    /* JUS-TAG hw={"WIRELESS":1} io=["048080f8"] */
  iVar2 = DAT_027f97f0;
  OS_DisableInterrupts();
  OS_RestoreInterrupts();
  uVar3 = _DAT_048080f8;
  uVar6 = *(ushort *)(iVar2 + 0x6a);
  param_1 = param_1 & *(ushort *)(iVar2 + 0x182);
  uVar1 = *(ushort *)(iVar2 + 0x3a);
  iVar4 = FUN_03804440(param_1);
  if ((int)(uint)*(ushort *)(iVar2 + 0x72) < (int)((uVar1 + 0xc) * iVar4 + 0x29 & 0xffffffe0)) {
    FUN_037fc1cc(2);
    FUN_027e17e0();
    return;
  }
  if ((*(short *)(iVar2 + 0x62) == 1) || (*(short *)(iVar2 + 100) == 1)) {
    uVar5 = FUN_027e69b4(*(undefined2 *)(iVar2 + 0x6e),*(undefined2 *)(iVar2 + 0x6c),param_1,
                         *(undefined2 *)(iVar2 + 0x40));
    uVar6 = uVar6 | 0x8000;
  }
  else {
    uVar5 = 0;
    uVar6 = uVar6 & 0x7fff;
  }
  FUN_027e2734(auStack_218,0x800c,0,0,param_1,uVar5,uVar3,0,uVar6,0);
  return;
}

