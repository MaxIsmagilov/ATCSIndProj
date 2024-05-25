# The Kármán-Trefftz Transform

The [Kármán-Trefftz transform](https://en.wikipedia.org/wiki/Joukowsky_transform#K%C3%A1rm%C3%A1n%E2%80%93Trefftz_transform) is a variation of the [Joukowsky transform](joukowsky.md); It also generates airfoils. One of the drawbacks of the Joukowsky transform is that the trailing edge (the downstream edge) meets at an angle of zero degrees, so it is impossible to actually manufacture a perfect Joukowsky airfoil. The Kármán-Trefftz transform adds another variable, ${n}$ to determine the trailing edge angle. The trailing edge angle is found with ${\alpha=180{(2-n)}}$:  

 - ${n=2}$ deteriorates into a Joukowsky transform, and
 - ${n=1}$ becomes a wonky circle.

${n}$ is usually set at almost ${2}$. The actual transform is defined as: 

${z=nb{\frac{(\zeta+1)^{n}+(\zeta-1)^{n}}{(\zeta+1)^{n}-(\zeta-1)^{n}}}.}$

This transform also can transform the potential flow field like the Joukowsky transform.

#### Back to README:

[README](../README.md)