
/* WARNING: Control flow encountered bad instruction data */

void FUN_037fb948(uint param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  
  uVar4 = 0;
  if (DAT_03808248 != 0) {
    do {
      *(undefined4 *)(DAT_03808248 + 0x48) = 1;
      *(undefined4 *)(DAT_03808248 + 0x5c) = 0;
      *(undefined4 *)(DAT_03808248 + 0x60) = 0;
      iVar2 = *(int *)(DAT_03808248 + 100);
      *(undefined4 *)(DAT_03808248 + 100) = 0;
      DAT_03808248 = iVar2;
    } while (iVar2 != 0);
    DAT_03808248 = 0;
    DAT_0380824c = 0;
    DAT_038082d8 = 1;
    param_1 = 0;
  }
  puVar1 = DAT_038082dc;
                    /* WARNING: Could not recover jumptable at 0x037fb9a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (DAT_038082d8 == 0) {
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  DAT_038082d8 = 0;
  puVar3 = DAT_038082e0;
  while( true ) {
    if (puVar3 != (undefined4 *)0x0) {
      param_1 = (uint)*(ushort *)(puVar3 + 0x12);
    }
    if (puVar3 == (undefined4 *)0x0 || param_1 == 1) break;
    puVar3 = (undefined4 *)puVar3[0x13];
  }
  if ((puVar3 == (undefined4 *)0x0) || (puVar3 == DAT_038082dc)) {
                    /* WARNING: Could not recover jumptable at 0x037fb9e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  if (DAT_038082e4 != (code *)0x0) {
    (*DAT_038082e4)();
  }
  DAT_038082dc = puVar3;
  *puVar1 = uVar4;
  puVar1[1] = in_stack_00000004;
  puVar1[2] = in_stack_00000008;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

