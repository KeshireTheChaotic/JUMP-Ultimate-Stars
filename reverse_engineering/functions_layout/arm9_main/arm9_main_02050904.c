
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02050904(int param_1)

{
                    /* JUS-TAG hw={"MATH_DIVSQRT":3} io=["040002b0","040002b8","040002bc"] */
  if (param_1 < 1) {
    return;
  }
  _DAT_040002b0 = 1;
  _DAT_040002b8 = 0;
  _DAT_040002bc = param_1;
  FUN_02050838();
  return;
}

