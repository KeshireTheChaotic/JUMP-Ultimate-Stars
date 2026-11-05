
void FUN_02164cb8(undefined4 param_1)

{
  if (DAT_0216e824 != (code *)0x0) {
    (*DAT_0216e824)(0x8000000,s__s__>_0216c130,
                    (&PTR_s_DWCi_MOV_WH_SYSSTATE_STOP_0216bf10)[*(int *)(DAT_0216e828 + 0x40)]);
  }
  *(undefined4 *)(DAT_0216e828 + 0x40) = param_1;
  if (DAT_0216e824 != (code *)0x0) {
    (*DAT_0216e824)(0x8000000,&DAT_0216c138,
                    (&PTR_s_DWCi_MOV_WH_SYSSTATE_STOP_0216bf10)[*(int *)(DAT_0216e828 + 0x40)]);
  }
  return;
}

