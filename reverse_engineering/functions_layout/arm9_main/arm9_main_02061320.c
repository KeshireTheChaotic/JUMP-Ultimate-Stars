
void FUN_02061320(undefined4 *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  code *UNRECOVERED_JUMPTABLE_00;
  
  if ((param_1[1] & 0x1f) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0206133c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(2);
    return;
  }
  if ((param_1[2] & 0x1f) != 0) {
                    /* WARNING: Could not recover jumptable at 0x02061350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(2);
    return;
  }
  if (param_1[2] == 0) {
                    /* WARNING: Could not recover jumptable at 0x0206135e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(2);
    return;
  }
  if ((uint)param_1[3] < 0x400) {
                    /* WARNING: Could not recover jumptable at 0x02061370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(2);
    return;
  }
  switch(*param_1) {
  case 0:
    uVar3 = 0;
    break;
  case 1:
    uVar3 = 1;
    break;
  case 2:
    uVar3 = 2;
    break;
  case 3:
    uVar3 = 3;
    break;
  case 4:
    uVar3 = 5;
    break;
  case 5:
    uVar3 = 7;
    break;
  default:
                    /* WARNING: Could not recover jumptable at 0x020613b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(2);
    return;
  }
  if (param_1[4] != 0) {
    uVar3 = uVar3 | 0x10;
  }
  OS_DisableInterrupts();
  if (*piRam02061424 != 0) {
    OS_RestoreInterrupts();
                    /* WARNING: Could not recover jumptable at 0x020613e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(1);
    return;
  }
  *piRam02061424 = 1;
  OS_RestoreInterrupts();
  piVar1 = piRam02061424;
  piRam02061424[1] = param_2;
  piVar1[2] = param_3;
  piVar1[4] = param_1[5];
  piVar1[5] = param_1[6];
  iVar2 = func_0x02061110(param_1[1],param_1[2],param_1[3],uVar3);
  if (iVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0206141e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(3);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02061414. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(0);
  return;
}

