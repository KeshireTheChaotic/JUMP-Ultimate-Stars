
void FUN_020554cc(uint param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar1 = OS_DisableInterrupts();
  uVar7 = param_1 & DAT_020aaec0 & 0x1ff;
  while( true ) {
    iVar2 = FUN_020554c4(uVar7);
    uVar5 = 0x1f - iVar2;
    if ((int)uVar5 < 0) break;
    uVar3 = (uint)(ushort)(&DAT_020aaec4)[uVar5];
    uVar6 = ~(1 << (uVar5 & 0xff));
    uVar4 = uVar3;
    if (param_2 == uVar3) {
      uVar4 = DAT_020aaec0;
    }
    uVar7 = uVar7 & uVar6;
    if (param_2 == uVar3) {
      DAT_020aaec0 = uVar4 & uVar6;
      (&DAT_020aaec4)[uVar5] = 0;
    }
  }
  OS_RestoreInterrupts(uVar1);
  return;
}

