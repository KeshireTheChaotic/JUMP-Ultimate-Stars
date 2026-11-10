
/* JUS-CLASS BattleAI_Part_02181740::vfunc_22 [class-virtual] slot 22 of vtable 02181740 (own slot,
   not inherited) */

void BattleAI_Part_02181740::vfunc_22(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 extraout_r1;
  undefined4 uVar3;
  bool bVar4;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x50);
  *(int *)(iVar2 + 0xc) = (int)*(short *)(param_1 + 0xc) << 0xc;
  FUN_02174174(iVar2,1);
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x50);
  *(int *)(iVar2 + 0x10) = (int)*(short *)(param_1 + 0xe) << 0xc;
  FUN_02174174(iVar2,1);
  bVar4 = *(char *)(param_1 + 0x10) != '\0';
  uVar3 = extraout_r1;
  if (bVar4) {
    uVar3 = 1;
  }
  if (!bVar4) {
    uVar3 = 0;
  }
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x80) = uVar3;
  cVar1 = *(char *)(param_1 + 0x11);
  *(char *)(param_1 + 0x11) = cVar1 + -1;
  if (cVar1 < '\x01') {
    *(undefined1 *)(param_1 + 0x11) = 0;
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  return;
}

