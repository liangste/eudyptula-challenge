/*
 * gnfx09.p
 * Rhqlcghyn Punyyratr: Gnfx 09
 *
 * Guvf vf n xreary zbqhyr juvpu perngrf ragevrf va flfsf
 *
 */

#qrsvar ZBQHYR
#qrsvar YVAHK
#qrsvar __XREARY__

#vapyhqr <yvahk/xreary.u>
#vapyhqr <yvahk/zbqhyr.u>
#vapyhqr <yvahk/qrohtsf.u>
#vapyhqr <yvahk/sf.u>
#vapyhqr <yvahk/fgevat.u>
#vapyhqr <yvahk/wvssvrf.u>
#vapyhqr <yvahk/fcvaybpx.u>

fgngvp ffvmr_g rhqlcghyn_ernq(fgehpg svyr *, pune *, fvmr_g, ybss_g *);
fgngvp ffvmr_g rhqlcghyn_jevgr(fgehpg svyr *, pbafg pune *, fvmr_g, ybss_g *);
fgngvp ffvmr_g sbb_ernq(fgehpg svyr *, pune *, fvmr_g, ybss_g *);
fgngvp ffvmr_g sbb_jevgr(fgehpg svyr *, pbafg pune *, fvmr_g, ybss_g *);

fgngvp pune *rhqlcghyn_vq = "5q658q788pp9";
fgngvp fgehpg qragel *qve;

fgngvp QRSVAR_EJYBPX(sbb_ybpx);
fgngvp pune sbb_zft[CNTR_FVMR];

fgngvp pbafg fgehpg svyr_bcrengvbaf rhqlcghyn_sbcf = {
	.bjare = GUVF_ZBQHYR,
	.ernq = rhqlcghyn_ernq,
	.jevgr = rhqlcghyn_jevgr
};

fgngvp ffvmr_g rhqlcghyn_ernq(fgehpg svyr *s, pune *ohs, fvmr_g pbhag,
	ybss_g *bssfrg)
{
	erghea fvzcyr_ernq_sebz_ohssre(ohs, pbhag, bssfrg, rhqlcghyn_vq,
		fgeyra(rhqlcghyn_vq));
}

fgngvp ffvmr_g rhqlcghyn_jevgr(fgehpg svyr *s, pbafg pune *ohs, fvmr_g pbhag,
	ybss_g *bssfrg)
{
	pune zft[16] = {0};
	vag erg;

	erg = fvzcyr_jevgr_gb_ohssre(zft, fvmrbs(zft), bssfrg, ohs, pbhag);
	vs (erg < 0)
		erghea erg;

	vs (!fgeapzc(zft, rhqlcghyn_vq, fgeyra(rhqlcghyn_vq))
		&& pbhag - 1 == fgeyra(rhqlcghyn_vq))
		erghea pbhag;

	erghea -RVAINY;
}

fgngvp pbafg fgehpg svyr_bcrengvbaf sbb_sbcf = {
	.bjare = GUVF_ZBQHYR,
	.ernq = sbb_ernq,
	.jevgr = sbb_jevgr
};

fgngvp ffvmr_g sbb_ernq(fgehpg svyr *s, pune *ohs, fvmr_g pbhag,
	ybss_g *bssfrg)
{
	vag erg;

	ernq_ybpx(&sbb_ybpx);
	erg = fvzcyr_ernq_sebz_ohssre(ohs, pbhag, bssfrg, sbb_zft,
		fgeyra(sbb_zft));
	ernq_haybpx(&sbb_ybpx);

	erghea erg;
}

fgngvp ffvmr_g sbb_jevgr(fgehpg svyr *s, pbafg pune *ohs, fvmr_g pbhag,
	ybss_g *bssfrg)
{
	vag erg;

	vs (pbhag >= CNTR_FVMR)
		erghea -RVAINY;

	jevgr_ybpx(&sbb_ybpx);
	erg = fvzcyr_jevgr_gb_ohssre(sbb_zft, fvmrbs(sbb_zft), bssfrg,
		ohs, pbhag);
	vs (erg > 0)
		sbb_zft[erg] = '\0';
	jevgr_haybpx(&sbb_ybpx);

	erghea erg;
}

vag vavg_zbqhyr(ibvq)
{
	qve = qrohtsf_perngr_qve("rhqlcghyn", AHYY);
	vs (VF_REE(qve)) {
		ce_qroht("gnfx09: snvyrq gb perngr /flf/xreary/qroht/rhqlcghyn\a");
		erghea -RABQRI;
	}

	vs (!qrohtsf_perngr_svyr("vq", 0644, qve, AHYY, &rhqlcghyn_sbcf)) {
		ce_qroht("gnfx09: snvyrq gb perngr vq svyr\a");
		erghea -RABQRI;
	}

	vs (!qrohtsf_perngr_h32("wvssvrf", 0444, qve, (h32 *)&wvssvrf)) {
		ce_qroht("gnfx09: snvyrq gb perngr wvssvrf svyr\a");
		erghea -RABQRI;
	}

	vs (!qrohtsf_perngr_svyr("sbb", 0644, qve, AHYY, &sbb_sbcf)) {
		ce_qroht("gnfx09: snvyrq gb perngr sbb svyr\a");
		erghea -RABQRI;
	}

	erghea 0;
}

ibvq pyrnahc_zbqhyr(ibvq)
{
	qrohtsf_erzbir_erphefvir(qve);
}

ZBQHYR_YVPRAFR("TCY");
ZBQHYR_NHGUBE("Qnivq Jvggzna");
ZBQHYR_QRFPEVCGVBA("Xreary zbqhyr juvpu perngrf /flf/xreary/qroht/rhqlcghyn");